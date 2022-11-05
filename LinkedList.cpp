#include <iostream>
//Implementations of the functions
#include "LinkedList.h"

using namespace std;

//Is empty function
bool LinkedList::isEmpty(){
    if(head==nullptr){
        return true;
    }
    return false;
}

//Add functions
void LinkedList::addToHead(int data){
    head=new Node(data, head);
    if(tail==nullptr){
        tail=head;
    }
    return;
}

void LinkedList::addToTail(int data){
    if(tail==nullptr){
        tail = new Node(data);
        head = tail;
        return;
    }
    Node *tail1=new Node(data);
    tail->next=tail1;
    tail=tail1;
    return;
}

void LinkedList::add(int data, Node *predecessor){
    predecessor->next=new Node(data, predecessor->next);
    if(tail==predecessor){
        tail=predecessor->next;
    }
    return;
}

//Remove functions
void LinkedList::removeFromHead(){
    if(head==nullptr){
        return;
    }
    Node *todelete=head;
    head=head->next;
    delete[]todelete;
    return;
}

void LinkedList::remove(int data){
    if(head->data==data){
        Node* todelete=head;
        head=head->next;
        delete[]todelete;
        return;
    }
    Node* pre=head;
    int flag=0;
    while(flag!=1){
        if((pre->next)->data==data){
            Node* todelete=pre->next;
            pre->next=pre->next->next;
            if(tail==todelete){
                tail=pre;
            }
            delete[]todelete;
            return;
        }
        pre=pre->next;
        if(pre==nullptr){
            flag=1;
        }
    }
    return;
}

//Retrive function
Node* LinkedList::retrive(int data){
    if(head->data==data){
        return head;
    }
    Node* pre=head;
    int flag=0;
    while(flag!=1){
        if((pre->next)->data==data){
            return pre->next;
        }
        if(pre->next==nullptr){
            return nullptr;
        }
        pre=pre->next;
    }
}

//Search function
bool LinkedList::search(int data){
    Node* check=head;
    while(check!=nullptr){
        if(check->data==data){
            return true;
        }
        check=check->next;
    }
    return false;
}

//Traverse function
void LinkedList::traverse(){
    Node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl<<endl;
    return;
}