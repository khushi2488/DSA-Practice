#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
      int longestUniquesubstr(string &s){
            int n=s.length();
            int maxlen=0;
            for(int i=0;i<n;i++){
                unordered_set<char> st;
                for(int j=i;j<n;j++){
                    if(st.count(s[j])){
                        break;
                    }
                    st.insert(s[j]);
                    maxlen=max(maxlen,j-i+1);
                }
            }
            return maxlen;
      }
      // tc : O(n^2)
//sc :O(n)


       int longestUniqueSubstr2(string &s) {
       unordered_map<char,int> mp;
       int left=0;
       int maxlen=0;
       for(int  right=0;right<s.length();right++){
        char ch=s[right];
        if(mp.find(ch)!=mp.end() && mp[ch]>=left){
            left=mp[ch]+1;
        }
        mp[ch]=right;
        maxlen=max(maxlen,right-left+1);


       }
       return maxlen;

       }
}; 

//tc : O(N)
//Sc : O(k)
