#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        unordered_map<int,int>mp;
        vector<int> res;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
         priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
         for(auto &elem:mp){
             pq.push({elem.second,elem.first});
             if(pq.size()>k){
                 pq.pop();
             }
         }
         while(!pq.empty()){
             res.push_back(pq.top().second);
             pq.pop();
         }
         reverse(res.begin(), res.end());
         return res;
        
    }
};

//Tc : O(n log n)
//sc : O(n) map + O(k) pq + O(k) res= O(n)