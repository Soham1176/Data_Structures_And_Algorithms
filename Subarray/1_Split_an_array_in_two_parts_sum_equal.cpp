#include <bits/stdc++.h>
using namespace std;
// Brute Force Front Approach Traversal 
int Split(int arr[],int n)
{
    int lsum = 0;
    for (int i = 0; i < n; i++)
    {
        lsum = lsum + arr[i];

        int rsum = 0;
        for (int j = i+1; j <n; j++)
        {
            rsum = rsum + arr[j];
        }
        
        if(lsum == rsum)
            return i+1;
    }
    return -1;
    
}

//Optimised Approach Back Traversal
int Split_1(int arr[],int n)
{
    int lsum = 0;
    for (int i = 0; i < n; i++)
    {
        lsum = lsum + arr[i];

    }
    
    int rsum = 0;
    for (int j = n-1;j>=0;j--)
    {
        rsum = rsum + arr[j];
        lsum = lsum - arr[j];
        
        if(lsum == rsum)
            return j;
    }
        
    return -1;
    
}

void printSplit(int arr[],int n)
{
    int index = Split(arr,n);
    int index_1 = Split_1(arr,n);
    if (index_1 == -1 || index_1 == n )
    {
        cout<<"No split"<<endl;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(index == i) cout<<endl;
        cout<<arr[i]<<" ";
    }
    
}



int main()
{
    int arr[] = {1 , 2 , 3 , 4 , 5 , 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printSplit(arr,n);
    return 0;
}