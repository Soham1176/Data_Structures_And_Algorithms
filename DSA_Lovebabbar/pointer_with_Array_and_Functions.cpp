#include<iostream>
using namespace std;

void print (int *p)
{
    cout<<*p<<endl;
}

void update(int *p)
{
    //to Update the value
    *p = *p + 1;
}

int getSum(int *arr,int n)
{
    cout << endl<<"Size of the array :"<<sizeof(arr)<<endl;
    int sum =0 ;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;

    
    
}

int main()
{
    /*
    int value = 5;
    int *p = &value;

    cout<<"Before:"<<*p<<endl;

    update(p);

    cout<<"After:"<<*p<<endl;
    */

    int arr[5] = {1,3,5,6,7};

    cout<<"The Sum is:"<<getSum(arr,5)<<endl;


    return 0;
}