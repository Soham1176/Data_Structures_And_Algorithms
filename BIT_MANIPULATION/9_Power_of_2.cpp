#include <bits/stdc++.h>
using namespace std;

void Power_Of_2(int &n)
{
   if(ceil(log2(n)) == floor(log2(n)))
   {
    cout<<"YES"<<endl;
   }
   else
   cout<<"NO"<<endl;
}

bool isPowerOfTwo(int x)
{
	/* First x in the below expression is for the case when
	* x is 0 */
	return x && (!(x & (x - 1)));
}
int main()
{
    int n1 = 8;
    int n2 = 15;
    Power_Of_2(n1);
    Power_Of_2(n2);
    return 0;
}