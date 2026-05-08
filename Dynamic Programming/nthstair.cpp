#include<bits/stdc++.h>
using namespace std;
int countways(int n){
    vector<int> dp(n+1);
    dp[0]=1;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];

    }
    return dp[n];

}
int main(){
    int n;
    cin>>n;
    cout<<countways(n);
    return 0;
}

//tc : O(n)
//Sc:O(n)


int countways2(int n){
   if(n==1){
    return 1;
   }
   if(n==2){
    return 2;
   } 
   int prev2=1;  //dp[1]=1
   int prev1=2;  //dp[2]=2
   int curr;
   for(int i=3;i<=n;i++){
    curr=prev1+prev2;
    prev2=prev1;
    prev1=curr;
   }
   return prev1;

}

//tc :O(n);
//Sc : O(1)