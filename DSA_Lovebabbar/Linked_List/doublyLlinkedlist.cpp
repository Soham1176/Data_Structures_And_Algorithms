#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d)
    {
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }

    ~Node(){
        int value = this ->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data :"<<value<<endl;
        
    }


};

// traversing the Linked list
void print(Node* &head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp ->data << " ";
        temp = temp ->next;
    }
    cout<< endl;
    
}

// Finding out the length
int getLenght(Node* &head)
{
    int len = 0;
    Node* temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp ->next;
    }
    
    return len;
}

// insert at head
void insertAtHead(Node* & tail,Node* &head ,int d)
{

    if (head == NULL)
    {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }

    else{
        Node* temp = new Node(d);

        temp -> next = head;
        head ->prev = temp;
        head = temp;

    }
    

}

// insert at Tail
void insertAtTail(Node* & tail,Node* &head,int d)
{

    if (tail ==NULL)
    {
        Node* temp = new Node(d);
        tail= temp; 
        head = temp;
    }

    else{
        Node* temp = new Node(d);

        tail ->next = temp;
        temp->prev = tail;
        tail = temp;

    }    
}

void deleteNode(int position,Node* &head)
{
    if (position == 1 )
    {
        Node* temp = head;
        temp ->next ->prev = NULL;
        head = temp->next;
        temp ->next = NULL;
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

       curr ->prev = NULL;
       prev ->next = curr->next;
       curr ->next = NULL;

       delete curr;
    }
    
}

// insert AT position
void insertAtPosition(Node*head,Node*tail,int position,int d)
{

    // insert at start position is 1

    if (position ==1)
    {
        insertAtHead(tail,head,d);
        return;
    }
    
    Node* temp = head;
    int cnt = 1;
    
    while (cnt < position -1)
    {
        temp = temp->next;
        cnt++;
    }
    
    // insert at last position
    if (temp ->next == NULL)
    {
        insertAtTail(tail,head,d);
        return ;
    }
    
    // insert in middle
    // create a Node for d
    Node* nodetoInsert = new Node(d);
    
    nodetoInsert ->next = temp ->next;
    temp -> next -> prev = nodetoInsert;
    temp -> next = nodetoInsert;
    nodetoInsert -> prev = temp;
    
}

int main(){

    Node* node1 = new Node(10);
    // if you don't create new node then your head & tail will be NULL 
    // in insertAtHead we put the Head == NULL condition so that it can handle this otherwise it will give the segmentation fault 
    // same is case with insertAtTail 

    
    Node* head = node1; // head creation
    Node* tail = node1;  // creation of tail
    // print(head);

    // cout<<getLenght(head)<<endl;

    insertAtHead(tail,head,11);
    print(head);

    insertAtHead(tail,head,13);
    print(head);

    insertAtHead(tail,head,15);
    print(head);


    // insertAtTail(tail,20);
    print(head);

    insertAtPosition(head,tail,3,100);
    print(head);

    deleteNode(5,head);
    print(head);

}