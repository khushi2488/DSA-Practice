#include<bits/stdc++.h>
using namespace std;
 vector<int> findAnagrams(string s, string p){
    vector<int> ans;
    int n=s.size();
    int m=p.size();
    vector<int> pcount(26,0);
    vector<int> windowcount(26,0);
    for(char ch:p){
        pcount[ch-'a']++;

    }
    int i=0;
    int j=0;
    while(j<n){
        windowcount[s[j]-'a']++;
        if(j-i+1==m){
               if(windowcount==pcount){
                ans.push_back(i);
               }

               //remove the left char in window
               windowcount[s[i]-'a']--;

               i++;
        }
        j++;
    }
    return ans;
 }
 //Tc : O(n)
 //Sc: O(1)