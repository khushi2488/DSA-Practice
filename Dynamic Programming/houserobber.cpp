#include<bits/stdc++.h>
using namespace std;

int findmaxsum(vector<int>& arr){
     int n=arr.size();
     if(n==1){
        return arr[0];
     }
     vector<int> dp(n);
     dp[0]=0;
     dp[1]=max(arr[0],arr[1]);

     for(int i=2;i<n;i++){
        int pick=arr[i]+arr[i-2];
        int notpick=dp[i-1];

        dp[i]=max(pick,notpick);
     }
     return dp[n-1];
}

//tc :O(n)
//sc : O(n)

int findmaxsum2(vector<int>& arr){
    int n=arr.size();
    if(n==1){
        return arr[0];
    }
    int prev2=arr[0];
    int prev1=max(arr[0],arr[1]);
    for(int i=2;i<n;i++){
        int curr=max(prev1,arr[i]+prev2);
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}

// Tc : O(n)
//Sc : O(1)
