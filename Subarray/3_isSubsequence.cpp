// Leetcode question:https://leetcode.com/problems/is-subsequence/description/
// 
// class Solution {
// public:

//     bool Check(string s,int ns,string t,int nt)
//     {
//         int cnt =0;
//         if(ns == 0) return true;
//         int i=0,j=0;
//        while(i<ns && j<nt)
//        {
//            if(s[i] == t[j]) i++;
//            j++;
//        }
//        if (i == ns) return true;
        
//         return false;
//     }
//     bool isSubsequence(string s, string t) {
//       int ns = s.length();
//       int nt = t.length();
//       return Check(s,ns,t,nt);
//     }
// };