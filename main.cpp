#include <iostream>
#include "arraystack.cpp"
#include "linkedliststack.cpp"

using namespace std;

int main(){
    cout<<"Array Stack\n\n";

    arraystack s(5);
    cout<<"Checking isEmpty\n";
    if(s.isEmpty()){
        cout<<"Stack is empty\n\n";
    }else{
        cout<<"Stack is not empty\n\n";
    }

    s.push(5);
    cout<<"Pushing data in stack\n";
    cout<<"Checking isEmpty\n";
    if(s.isEmpty()){
        cout<<"Stack is empty\n\n";
    }else{
        cout<<"Stack is not empty\n\n";
    }

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"Checking isFull\n";
    if(s.isFull()){
        cout<<"Stack is full\n\n";
    }else{
        cout<<"Stack is not full\n\n";
    }

    
    cout<<"Popping data from the stack\n";
    cout<<s.pop()<<endl;
    cout<<"Checking isFull\n";
    if(s.isFull()){
        cout<<"Stack is full\n\n";
    }else{
        cout<<"Stack is not full\n\n";
    }

    cout<<"Checking top data\n";
    cout<<s.viewtop()<<endl<<endl<<endl<<endl;


    cout<<"LinkedList Stack\n\n";
    linkedliststack s1;
    cout<<"Checking isEmpty\n";
    if(s1.isEmpty()){
        cout<<"Stack is empty\n\n";
    }else{
        cout<<"Stack is not empty\n\n";
    }
    //s1.pop();
    s1.push(5);
    cout<<"Pushing data to stack\n";
    cout<<"Checking isEmpty\n";
    if(s1.isEmpty()){
        cout<<"Stack is empty\n\n";
    }else{
        cout<<"Stack is not empty\n\n";
    }

    cout<<"Pushing data to the stack\n\n";
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);
    cout<<"Poping data from the stack\n";
    cout<<s1.pop()<<endl<<endl<<endl;

    cout<<"Checking top data\n";
    cout<<s1.viewtop()<<endl;

    return 0;
}