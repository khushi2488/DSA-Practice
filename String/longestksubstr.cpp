#include<bits/stdc++.h>
using namespace std;
int longestksubstr(string &s,int k){
    unordered_map<char,int> mp;
    int left=0;
    int maxlen=-1;
    for(int right=0;right<s.length();right++){
        mp[s[right]]++;
        while(mp.size()>k){
            mp[s[left]]--;

            if(mp[s[left]]==0){
                mp.erase(s[left]);
            }
            left++;
        }
        if(mp.size()==k){
            maxlen=max(maxlen,right-left+1);
        }
        
    }
    return maxlen;
}

//Tc : O(N)
//SC : O(k)
