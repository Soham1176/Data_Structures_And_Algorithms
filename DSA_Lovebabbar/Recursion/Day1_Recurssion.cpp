#include<iostream>
using namespace std;

int factorial(int n)
{
    //base case :
    if(n==0)
        return 1;

    //non-base case:
    int chooti = factorial(n-1);
    int baddi = n * chooti;

    return baddi;
}


int main()
{
    int n;
    cin >>n;

    int ans = factorial(n);
    cout<<ans <<endl;
}