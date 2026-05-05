#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string frequencySort(string &s) {
        // code here
        unordered_map<int,int> mp;
        for (char ch : s){
            mp[ch]++;
        }
         priority_queue<
            pair<int,char>, 
            vector<pair<int,char>>, 
            greater<pair<int,char>>
        > pq;
        
        for(auto &ele : mp){
            pq.push({ele.second , ele.first});
        }
        
        string res="";
        while(!pq.empty()){
            auto top=pq.top();
            pq.pop();
            int freq=top.first;
            char ch=top.second;
            res+=string(freq,ch);
        }
        return res;
    }
};

// tc : O(n) map +o(nlogn) -> heap insert fpr sort = o(nlogn)
//sc : O(1) -> map (26)