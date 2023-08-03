#include <iostream>
using namespace std;

void update(int arr[],int n)
{
    cout<<"inside the Function"<<endl;
    
    arr[0] = 120;
    for(int i = 0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Going back to main Function"<<endl;
}

int main()
{
    int arr[3] = {1,2,4};
    
    update(arr,3);
    
    //Print the Elements 
    cout<<"Printing inside the main Function"<<endl;
    for(int i = 0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
}


