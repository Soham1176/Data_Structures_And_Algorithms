#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    //It is Destructor to free the memory from the heap
    ~Node()
    {
        int value = this->data;
        //free memory
        if (this ->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is Free:"<<endl;
        
    }

};

void insertAtHead(Node* &head,int data)
{
    Node* temp = new Node(data);
    temp ->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int data)
{
    Node* temp = new Node(data);
    tail ->next = temp;
    tail = temp;
}

void inserAtPosition(Node* &tail,Node* &head,int position,int data)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head,data);
        return;
    }
    
    
    // Creating the node
    Node* temp = head;
    int count = 1;
    while (count < position -1)
    {
        temp = temp ->next;
        count++;
    }

    // insert at end
    if (temp ->next == NULL)
    {
        insertAtTail(tail,data);
        return;
    }

    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<< temp-> data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void deleteNode(Node* & head,int position)
{
    //delete the first Node
    if (position == 1)
    {
        Node* temp = head;
        head = head ->next;
        temp ->next = NULL;
        delete temp;
    }

    else
    {
        //delete the middle or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev ->next = curr ->next;
        curr->next = NULL;
        delete curr;
        
    }
    
}

int main()
{
    //Created a new Node
    Node* node1 = new Node(10);
    // cout<< node1 ->data <<endl;
    // cout<< node1 ->next <<endl;

    //Node pointing to the head
    Node* head = node1;
    // print(head);

    //Node pointing to the Tail
    Node* tail = node1;

    // insertAtHead(head,12);
    // print(head);

    insertAtTail(tail,14);
    insertAtTail(tail,15);
    insertAtTail(tail,17);

    //inserting the element
    inserAtPosition(tail,head,5,8);
    print(head);

    deleteNode(head,3);
    print(head);
}