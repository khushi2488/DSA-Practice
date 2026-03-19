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

int exactlyK2(vector<int>& arr , int k){
    return atMostK(arr,k)-atMostK(arr,k-1);
}

int atMostK(vector<int>& arr, int k){
    unordered_map<int,int> freq;
    int left=0;
    int count=0;
    int distinct=0;
    for(int right=0;right<arr.size();right++){
        if(freq[arr[right]]==0){
            distinct++;
        }
        freq[arr[right]]++;

        while(distinct>k){
            freq[arr[left]]--;
            if(freq[arr[left]]==0){
                distinct--;
            }
            left++;
        }
        count+=(right-left+1);
    }
    return count;

}

//TC :O(N)
//SC :O(N)