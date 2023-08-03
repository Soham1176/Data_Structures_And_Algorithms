#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,3,7,5};
    cout<<arr <<endl;

    char ch[6] ="bcdes";
    //prints the entire string
    cout<<ch<<endl; 

    int *ptr1 = &arr[0];
    cout<<*ptr1<<endl;

    char *ptr2 = &ch[0];
    cout<<*ptr2<<endl;

    char temp = 'z';
    char *p = &temp;

    cout<< p <<endl;
}