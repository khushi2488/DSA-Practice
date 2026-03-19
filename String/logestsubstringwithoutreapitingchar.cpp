#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestUniqueSubstring(string &s) {
        int right=0;
        int left=0;
        int maxlen=0;
        vector<int>lastseen(26,-1);
        for(int right=0;right<s.length();right++){
            int index=s[right]-'a';
            if(lastseen[index]>=left){
                left=lastseen[index]+1;
            }
            lastseen[index]=right;
            maxlen=max(maxlen, right-left+1);
            
        }
        return maxlen;
    }
};
//TC : O(n)
//SC : O(26)--> Constant