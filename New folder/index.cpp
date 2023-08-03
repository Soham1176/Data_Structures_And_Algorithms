//Decimal to Binary number conversion
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the Values of A & B:";
    cin>>a>>b;
    int n;
    cout<<"\nEnter the No:"<<endl;
    cout<<"Which Operation you would like to perform:"<<endl;
    cout<<" 1.Add \n 2.Sub \n 3.Multi \n 4.Div \n 5.Mod \n 6.>>(Right Shift) \n 7.<<(Left Shift)"<<endl;
    cin>>n;
    
    switch(n)
    {
        case 1:cout<<"The Addition is :"<<a+b<<endl;
        break;
        case 2:cout<<"The Substarction is :"<<a-b<<endl;
        break;
        case 3:cout<<"The Multiplication is :"<<a*b<<endl;
        break;
        case 4:cout<<"The Division is :"<<a/b<<endl;
        break;
        case 5:cout<<"The Modulus is :"<<a%b<<endl;
        break;
    }   
}




