#include<iostream>
using namespace std;

// 1 -> Prime
// 0 -> notPrime
int isPrime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    if(isPrime(num)==1)
    {
        cout<<"The Number is Prime:"<<endl;
    }
    else
    {
        cout<<"The Number is Not Prime:"<<endl;
    }
}


