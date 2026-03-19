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
// tc : O(n+k)
//sc : O(1)

int findmissing2(vector<int>& arr, int k){
int num=1;
int n=arr.size();
int i=0;
while(i<n && k>0){
    if(arr[i]==num){
        i++;
    }
    else {
        k--;
    }
    num++;
}
while(k--){
    num++;
}
return num-1;
  }



  int findmissing3(vector<int>& nums, int k ){
    int n=nums.size();
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        int kthmissing=nums[mid]-(mid+1);
        if(kthmissing<k){
            l=mid+1;
        }
        else{
            r=mid-1;
        }

    }
    return l+k;
  }
//O(logn)


};


