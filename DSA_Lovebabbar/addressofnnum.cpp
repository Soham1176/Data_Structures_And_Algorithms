#include<iostream>
using namespace std;

int main()
{
    int num = 5;
    int a = num ;
    cout<<"a Before : "<< num << endl;
    a++;
    cout<<"a after: "<<num<<endl;

    int *ptr = &num;
    cout<<"Before : "<< num <<endl;
    (*ptr)++;
    cout<<"after: "<<num<<endl;

    //address of - &
    cout<<"address of num : "<<&num<<endl;

    //copying the pointer
    int *q = ptr;
    cout<<ptr<<" - "<<q<<endl;
    cout<<*ptr<<" - "<<*q<<endl;

    int i = 3;
    int *t = &i;
   // cout<<(*t)++<<endl;
    *t = *t + 1;
    cout<<*t<<endl;

    cout<<"before t"<<t<<endl;
    t = t+1;
    cout<<"after t"<<t<<endl;
    
   
    return 0;
    
}