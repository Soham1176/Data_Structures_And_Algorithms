#include<iostream>
#include<queue>

using namespace std;

int main()
{
    deque<int> d;
    d.push_front(12);
    d.push_back(14);

    cout<<"Show Front: "<<d.front()<<endl;
    cout<<"Show Back: "<<d.back()<<endl;

    d.pop_front();

    cout<<"Show Front: "<<d.front()<<endl;
    cout<<"Show Back: "<<d.back()<<endl;
    
    d.pop_back();

    if (d.empty())
    {
        cout<<"Queue is empty:"<<endl;

    }
    else
    {
        cout<<"Queue is not empty:"<<endl;
    }
    


}