#include <iostream>
using namespace std;

bool search(int arr[],int size,int key)
{
    for(int i =0;i<=size;i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {1,2,4,5,8,19,21,-1,-90,0};
    
    cout<<"Enter the element you want to search:";
    int key;
    cin>>key;
    
    bool found = search(arr,10,key);
    
    if(found == 1)
    {
        cout<<"Key is present"<<endl;
    }
    else
    {
        cout<<"Key is absent"<<endl;
    }
}


