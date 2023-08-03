#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int> q;

    q.push(3); 

    cout<<"The Front Element"<<q.front()<<endl;
    
    q.push(5);

    cout<<"The Front Element"<<q.front()<<endl;
    
    q.push(7);
    
    cout<<"The Front Element"<<q.front()<<endl;

    cout<<"The Size is"<<q.size()<<endl;

    q.pop();

    cout<<"The Size is"<<q.size()<<endl;

    cout<<"The Front Element"<<q.front()<<endl;

}