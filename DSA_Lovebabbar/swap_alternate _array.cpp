#include<iostream>
using namespace std;

void print_Array(int arr[],int n) {
  for(int i = 0; i < n; i++) {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void swapAlternate(int arr[],int size)
{
  for(int i = 0; i < size; i+2) {
      if (i+1<size) {
        swap(i,i+1);
      }
  }
}


int main()
{
  int even[8] = {4,8,12,16,18,20,24,28};
  int odd[5] = {3,5,7,9,11}

  swapAlternate(even,8);
  print_Array(even,8);

  swapAlternate(odd,5);
  print_Array(odd,5);

  return 0;
}
