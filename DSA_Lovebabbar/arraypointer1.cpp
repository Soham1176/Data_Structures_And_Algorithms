#include<iostream>
using namespace std;

int main()
{
    /*int arr[10] = {2,5,6,9};
    cout <<"The Address of the first location is :"<<arr<<endl;
    cout <<"The Address of the first location is :"<< &arr[0]<<endl;

    cout <<"The value at 0th location is :"<< *arr <<endl;
    cout <<"We added 1 to value of the 0th Location : "<< *arr + 1<<endl;
    cout <<"The value at 1st location is :"<< *(arr+1)<<endl;

    int i=3;
    cout<<"The value at location 3 is:"<< i[arr] <<endl;
    

   int temp[10] = {1,2};
   cout<<sizeof(temp)<<endl;
   cout<<sizeof(*temp)<<endl;
   cout<<sizeof(&temp)<<endl;

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    

    int a[20] = {1,2,3,4};
    cout<<"->"<<&a[0]<<endl;
    cout<<a<<endl;
    cout<<&a<<endl;

    int *p = &a[0];
    cout<< p<<endl;
    cout<<*p<<endl;
    cout<<"->"<<&p<<endl;

    */
    int arr[10];

    //ERROR
    // arr = arr+1;

    int *ptr = &arr[0];
    cout<<ptr<<endl;

    ptr = ptr + 1;
    cout<<ptr<<endl;

    return 0;
}