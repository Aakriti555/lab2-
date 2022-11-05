#include <iostream>
#include "arrayqueue.cpp"
#include "linkedlistqueue.cpp"

using namespace std;

int main(){

    cout<<"--> Array Queue\n\n";
    arrayqueue lab3(7);

    cout<<"--> Checking isEmpty\n\n";
    if(lab3.isEmpty()){
        cout<<"--> Queue is empty\n\n";
    }
    else{
        cout<<"--> Queue is not empty\n\n";
    }

    cout<<"--> Adding to the queue\n\n";
    lab3.enQueue(678);
    if(lab3.isEmpty()){
        cout<<"--> Queue is empty\n\n";
    }else{
        cout<<"--> Queue is not empty\n\n";
    }

    cout<<"--> Filling the queue\n\n";
    lab3.enQueue(3562);
    lab3.enQueue(5643);
    lab3.enQueue(3783);
    lab3.enQueue(73829);
    cout<<"--> Checking isFull\n\n";
    if(lab3.isFull()){
        cout<<"--> Queue is full\n\n";
    }else{
        cout<<"--> Queue is not full\n\n";
    }

    cout<<"--> Removing a data from the queue\n\n -->";
    cout<<lab3.deQueue()<<" is removed from the list\n\n";

    cout<<"--> Again checking isFull\n\n";
    if(lab3.isFull()){
        cout<<"--> Queue is full\n\n";
    }else{
        cout<<"--> Queue is not full\n\n";
    }

    cout<<"--> The first element in the queue is "<<lab3.viewFront()<<endl;
    cout<<"--> The last element in the queue is "<<lab3.viewBack()<<endl;

    cout<<"--> Linked List Queue\n\n";
    linkedlistqueue linkvalue;
    cout<<"--> Checking isEmpty\n\n";
    if(linkvalue.isEmpty()){
        cout<<"--> Queue is empty\n\n";
    }else{
        cout<<"--> Queue is not empty\n\n";
    }

    cout<<"--> Adding  to the queue\n\n";
    linkvalue.enQueue(617822);
    if(linkvalue.isEmpty()){
        cout<<"--> Queue is empty\n\n";
    }else{
        cout<<"--> Queue is not empty\n\n";
    }

    cout<<"--> Filling the queue\n\n";
    linkvalue.enQueue(2172);
    linkvalue.enQueue(3781);
    linkvalue.enQueue(37182);
    linkvalue.enQueue(31821);
    
    cout<<"--> Removing a data from the queue\n\n-->";
    cout<<linkvalue.deQueue()<<" is removed from the list\n\n";

    cout<<"--> Not checking isFull as linkedlist can be expanded as per the need\n\n";
    

    cout<<"--> The first element in the queue is "<<linkvalue.viewFront()<<endl<<endl;
    cout<<"--> The last element in the queue is "<<linkvalue.viewBack()<<endl<<endl;

    return 0;
}