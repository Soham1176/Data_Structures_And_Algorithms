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
};
void insertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Create a new Node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // Head pointed to Node
    Node *head = node1;
    print(head);
    // Tail pointed to Node
    Node *tail = node1;
    print(tail);

    // // Insert karo value ko
    // insertAtHead(head, 12);
    // print(head);

    // // Insert karo value ko
    // insertAtHead(head, 15);
    // print(head);

    // Insert karo value ko
    insertAtTail(tail, 12);
    print(head);

    // Insert karo value ko
    insertAtTail(tail, 15);
    print(head);

    return 0;
}