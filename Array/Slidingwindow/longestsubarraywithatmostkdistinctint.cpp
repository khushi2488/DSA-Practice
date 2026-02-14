#include<bits/stdc++.h>
using namespace std;

int exactlyK(vector<int>& arr, int k) {
       int n=arr.size();
       int left=0;
       int maxlen=0;
       unordered_map<int,int> freq;
       for(int right=0;right<arr.size();right++){
        freq[arr[right]]++;
       
       while(freq.size()>2){
        freq[arr[left]]--;
        if(freq[arr[left]]==0){
            freq.erase(arr[left]);
        }
        left++;
       }
       maxlen=max(maxlen,right-left+1);
    }
    return maxlen;
}



//TC:O(N)
//SC:O(N)
