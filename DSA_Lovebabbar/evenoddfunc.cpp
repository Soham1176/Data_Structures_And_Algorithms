//Decimal to Binary number conversion
#include<iostream>
#include<math.h>

using namespace std;


bool isEven(int a)
{
    //odd
    if(a&1)
    {
        return 0;
    }
    
    return 1;
}

int main()
{
    int num;
    cin>>num;
    
    if(isEven(num))
    {
        cout<<"The Number is Even"<<endl;
    }
    else
    {
        cout<<"The Number is Odd"<<endl;
    }
    
}




