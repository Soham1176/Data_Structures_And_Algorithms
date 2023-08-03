#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this ->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data : " << value<<endl;
        
    }
};

// insertion of Node
void insertNode(Node* &tail,int element,int d)
{
    // Empty List
    if (tail == NULL)
    {
        Node* new_node = new Node(d);
        tail = new_node;
        new_node ->next = new_node;
    }
    else
    {
        // Assuming that element is present in the List
        // Non empty List

        Node* curr = tail;
        while (curr ->data != element)
        {
            curr = curr->next;
        }
        // element found -> curr is representing element wala Node
        Node* temp = new Node(d);
        temp ->next  = curr ->next;
        curr ->next = temp;
    }
    
}

// Traversing a Node
void print(Node* tail)
{
    Node* temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }
    
    do
    {
        cout<< tail->data <<" ";
        tail = tail->next;
    } while (tail != temp);
    cout<<endl;
} 

// deletion of Node
void deleteNode(Node* &tail,int element)
{
    // empty list
    if(tail == NULL)
    {
        cout<<"List is empty, please check again"<<endl;
        return;
    }
    else
    {
        // non empty
        // assuming that value is present in that Linked list
        
        Node* prev = tail;
        Node* curr = prev -> next ;

        while (curr->data != element)
        {
            prev = curr;
            curr = curr ->next;
        }

        prev ->next = curr ->next;

        // 1 Node Linked List

        if (tail == curr)
        {
            tail  = NULL;
        }
        
        // Node>=2 linked list
        else if (tail == curr)
        {
            tail = prev;
        }
        
        curr ->next = NULL;
        delete curr;
        

    }
}
int main()
{
    Node* tail = NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);
/*
    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,9,10);
    print(tail);

    deleteNode(tail,10);
    print(tail);
 */

    deleteNode(tail,5);
    print(tail);
return 0;
}