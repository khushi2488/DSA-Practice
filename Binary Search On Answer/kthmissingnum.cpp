#include<bits/stdc++.h>
using namespace std;
class Solution{
  int findmissing(vector<int>& arr, int k){
  int cnt=0;
  int curr=1;
  int i=0;
  while(cnt<k){
    if(i< arr.size() && arr[i]==curr){
        i++;
    }
    else{
        cnt++;
    }
    curr++;
  }
  return curr-1;
  }
};
// tc : O(n+k)
//sc : O(1)
