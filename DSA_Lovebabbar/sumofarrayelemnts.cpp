#include <iostream>
using namespace std;

int sumArray(int arr[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum;
}




int main()
{
    int arr[100],size;
    
    cout<<"Enter the size of array:";
    cin>>size;
    
    // INput the array elements
    for(int i = 0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"The Sum of Array elements is :"<<sumArray(arr , size);    
}


