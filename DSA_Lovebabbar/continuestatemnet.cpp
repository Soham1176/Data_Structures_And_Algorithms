// Check Continue concept

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<=n;i++)
    {
        cout<<"HI ";
        cout<<"Hey ";
        continue;//Below part of the continue statement is unreachable
        cout<<"Reply toh karde";
    }

    
}




