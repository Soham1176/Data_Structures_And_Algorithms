// Check the Prime Number using the For loop 
#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   bool isPrime =1;
   
   for(int i=2;i<n;i++) //Will not take the equal to sign
   {
       if(n%2==0)
       {
           isPrime =0;
           break;
       }
   }
   if(isPrime==0)
   {
       cout<<"Number "<< n <<" isn't a prime number"<<endl;
   } 
   else
   {
       cout<<"Number "<< n <<" is prime number"<<endl;
   }

    
}




