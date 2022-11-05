#ifndef LinkedList_h
#define LinkedList_h

class Node{  //Class of node
    public:     //holds the data and the pointer to next node
    int data;
    Node *next;

    Node(int d=0, Node *next=nullptr):data(d),next(next) {}     
    //constructor initializes the data as 1 and next as null pointer if is not given by user
};

class LinkedList{ //Class for linked list
    public:         //Holds pointers to head and tail and all the functions
    Node *head;
    Node *tail;

    LinkedList(Node *head=nullptr, Node *tail=nullptr):head(head), tail(tail) {}//Constructor

    bool isEmpty();     //function to check if list is empty

    void addToHead(int data);   //functions to add data
    void addToTail(int data);
    void add(int data, Node *predecessor);

    void removeFromHead();      //functions to remove data
    void remove(int data);

    Node* retrive(int data);    //function to retrive the pointer to the given node
    bool search(int data);      //function to search for a given data
    void traverse();            //function to reaverse through the list
};

#endif