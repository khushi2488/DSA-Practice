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
};

//TC : O(n)
//SC :O(1)