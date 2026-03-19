#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
           int n=arr.size();
           int ws=0;
           for(int i=0;i<k;i++){
               ws+=arr[i];
           }
           int maxsum=ws;
           
           for(int i=k;i<n;i++){
               ws+=arr[i];
               ws-=arr[i-k];
               
               maxsum=max(maxsum,ws);
           }
           return maxsum;
        
    }
};