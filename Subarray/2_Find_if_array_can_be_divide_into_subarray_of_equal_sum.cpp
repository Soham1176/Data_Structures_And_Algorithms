#include <bits/stdc++.h>
using namespace std;







bool printSplit(int arr[],int n)
{
    int index = Split(arr,n);
    if(index == -1 || index == n)
        return false;
        
    
}

int main()
{
    int arr[] = {6,2,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printSplit(arr,n);
    return 0;
}