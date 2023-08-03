#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }


    // destructor
    ~Node(){
        int value = this ->data;
        //memory free
        if (this ->next != NULL)
        {
            delete next;
            this ->next = NULL;
        }

        cout<<"Memory is free for node with data "<<value<<endl;
        
    }
};

void InsertAtHead(Node* &head,int d)
{
    // New Node Creation
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail,int d)
{
    // New Node Creation
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}

void InsertatPosition(Node* &tail,Node* &head,int position,int d)
{
    if (position ==1)
    {
        InsertAtHead(head,d);
        return ;
    }
    Node* temp = head;
    int cnt = 1;

    

    while (cnt < position-1)
    {
        temp = temp ->next;
        cnt++;
    }

    if (temp ->next == NULL)
    {
        InsertAtTail(tail,d);
        return;
    }
    
    // Creating a node for d
    Node* nodetoinsert = new Node(d);
    
    nodetoinsert -> next = temp ->next;

    temp->next = nodetoinsert;
    
}

void print(Node* &head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp ->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}


void deleteNode(int position,Node* &head)
{
    if (position == 1 )
    {
        Node* temp = head;
        head = head ->next;
        temp -> next = NULL;
        //free the memory
        delete temp;
    }
    else
    {
        // deleting the middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev ->next = curr->next;
        curr ->next = NULL;
        delete curr;
    }
    
}

void deleteTail(Node* &head)
{
    Node* curr = head;
    Node* prev = NULL;

    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr -> next;
    }
    
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    
    
}


int main()
{
    Node* node1 = new Node(10);
    // cout<< node1 ->data <<endl;
    // cout<< node1->next <<endl;
    
    // Pointer to head
    Node* head = node1;
    print(head);

    // Pointer to tail
    Node* tail = node1;


    // InsertAtHead(head,12);
    // print(head);

    // InsertAtHead(head,20);
    // print(head);

    InsertAtTail(tail,15);
    print(head);

    InsertAtTail(tail,17);
    print(head);

    InsertAtTail(tail,19);
    print(head);

    // InsertatPosition(head,3,22);
    // print(head);

    InsertatPosition(tail,head,1,22);
    print(head);

    // deleteNode(2,head);
    // print(head);
    
    cout<<"head :"<<head ->data<<endl;
    cout<<"tail :"<<tail ->data<<endl;


    deleteNode(5,head);
    print(head);

    deleteTail(head);
    print(head);

    return 0;
}