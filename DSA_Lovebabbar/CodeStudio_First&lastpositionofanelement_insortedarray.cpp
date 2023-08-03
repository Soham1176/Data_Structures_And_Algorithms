#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int key)
{
  int s = 0, e = n-1;
  int mid = s + (e-s)/2;
  int ans = -1;
  while(s<=e)
  {
    if(arr[mid] == key)
    {
      ans = mid;
      e = mid-1;
    }
    else if(key > arr[mid]){//right me jao
      s = mid+1;
    }
    else if(key < arr[mid]){//left me jao
      e = mid - 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}
int lastOccurence(int arr[],int n,int key)
{
  int s = 0, e = n-1;
  int mid = s + (e-s)/2;
  int ans = -1;
  while(s<=e)
  {
    if(arr[mid] == key)
    {
      ans = mid;
      s = mid+1;
    }
    else if(key > arr[mid]){//right me jao
      s = mid+1;
    }
    else if(key < arr[mid]){//left me jao
      e = mid - 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}


int main()
{
  int even[6] = {1,2,2,2,2,7};
  cout<<"First Occurence of 2 is : "<<firstOccurence(even,6,2)<<endl;
  cout<<"last Occurence of 2 is : "<<lastOccurence(even,6,2)<<endl;

}
