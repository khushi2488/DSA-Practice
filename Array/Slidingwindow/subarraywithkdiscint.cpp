#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int exactlyK(vector<int> &arr, int k) {
       int n=arr.size();
       int ans=0;
       for(int i=0;i<n;i++){
        unordered_map<int,int>freq;
        int dist=0;
        for(int j=i;j<n;j++){
            if(freq[arr[j]]==0){
                dist++;
            }
            freq[arr[j]]++;
            if(dist==k){
                ans++;
            }
            if(dist>k){
                break;
            }
        }

       }
       return ans;
        
    }
};

//TC :O(N^2)
//SC :O(N)