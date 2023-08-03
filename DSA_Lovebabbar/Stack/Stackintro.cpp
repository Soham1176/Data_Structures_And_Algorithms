#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele)
    {
        if (size - top >1)
        {
            top++;
            arr[top] = ele;
        }
        else
        {
            cout<<"Stack is Overflow" <<endl;
        }
        
    }

    void pop()
    {
        if(top>0)
        {
            top--;
        }
        else
        {
            cout<<"Stack is Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >=0 && top<size)
        {
            return arr[top];
        }
        else
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        
    }
    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(23);
    st.push(45);
    st.push(22);
    st.push(27);
    st.push(40);

    cout<< st.peek() <<endl;
    
    st.pop();
    cout<< st.peek() <<endl;

    st.pop();
    cout<< st.peek() <<endl;

    if(st.isEmpty() )
    {
        cout<<"Stack is Empty Mere Dost";
    }
    else
    {
        cout<<"Stack is not empty mere dost";
    }
}