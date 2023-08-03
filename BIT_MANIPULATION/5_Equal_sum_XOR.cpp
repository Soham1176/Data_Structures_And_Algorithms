#include <bits/stdc++.h>
using namespace std;

// normal approach
int EqualsumXOR(int &n)
{
    
    int cnt =0;
    int p;
    p=n;
    for(int i=0;i<=n;i++)
    {   
        if((p+i) == (p^i))
            cnt++;
    }
    return cnt;
    
}
// optimised aproach
// int EqualsumXor_2(int &n)
// {
//     int unst_bits = 0;
//     while (n)
//     {
//         if((n & 1 ) == 0)
//             unst_bits++;
        
//         n = n>>1; 
//     }
//     unst_bits = 1 << unst_bits;
//     return unst_bits;
    
// }

int main()
{
    int n= 20;
    cout<< EqualsumXOR(n)<<endl;
    // cout<< EqualsumXor_2(n);
    return 0;
}