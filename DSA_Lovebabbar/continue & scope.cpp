// Check Continue concept

#include <iostream>
using namespace std;

int main()
{
    int a= 3;
    cout<<a<<endl; //Globaly accesed variable
    
    if(true)
    {
        int b= 5;
        cout<<b<<endl;//Variable is accesed only for this 
    }
    
    int b=1; //Global scope 
    cout<<b<<endl;
    
    cout<<b<<endl;
    int i=8;
    for(int i=0;i<8;i++) //here i taken to be i=0 not i=8
    {
        cout<<"HI "<<endl;
    }
    if(1){
        int b;
        if(1)
        {
            int b;
            if(1)
            {
                cout<<b<<endl;
            }
        }
    }
    int j = 8;//global scope
    for(;j<8;j++)
    {
        cout<<"HI"<<endl;
    }
}




