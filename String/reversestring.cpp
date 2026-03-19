#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string reverseString(string& s) {
     
        int st=0;
        int e=s.length()-1;
        while(st<=e){
            swap(s[st],s[e]);
            st++;
            e--;
        }

    return s;
        
    }
    //TC : O(n)
    //SC :O(1)


    string reversestring2(string& s){
        string reversest;
        for(int i=s.length()-1;i>=0;i--){
            reversest+=s[i];
        }
        return reversest;
    }
    //tc : O(n)
    //SC : O(n)
};



