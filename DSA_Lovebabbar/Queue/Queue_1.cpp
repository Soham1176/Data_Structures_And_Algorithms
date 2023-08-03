#include <iostream>
using namespace std;

class Queue
{

    int *arr;
    int size;
    int front;
    int rear;

public:
    Queue()
    {
        size = 100001;
        front = 0;
        rear = 0;
    }

    void Enqueue(int data)
    {
        if(rear == size)
        {
            cout<<"Queue is Full"<<endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int Dequeue()
    {

        
        if(front == rear)
        {
            cout<<"Queue is Empty"<<endl;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
        
    }

    int Front()
    {
        if(front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    bool Isempty()
    {
        if(front == rear)
        {
            if (front == 0 && rear == 0)
            {
                return true;
            }
            
        }
        else
            return false;
    }

    
};

int main()
{
}