
//using the brute force 

#include<bits/stdc++.h>
using namespace std;
class solution{
public : 
int solve(string &s1,string &s2,int i,int j){
    if(i==s1.length() || j==s2.length()){
        return 0;
    }
    if(s1[i]==s2[j]){

        return 1 +solve(s1,s2,i+1,j+1);
    }
    return max(

        solve(s1,s2,i+1,j),
        solve(s1,s2,i,j+1)
    );


}
int lcs(string &s1,string &s2){
    return solve(s1,s2,0,0);
}

};

//TC-Exponential 
// Steps:
// 1. Start from index (0,0)
// 2. If i or j reaches end → return 0
// 3. If s1[i] == s2[j] → 1 + solve(i+1, j+1)
// 4. Else → max(solve(i+1, j), solve(i, j+1))


//using the  dp 

//tc is  O(n*m)
// Steps:
// 1. Create dp table of size (n+1) x (m+1)
// 2. Initialize first row & column with 0
// 3. If s1[i-1] == s2[j-1]
//       dp[i][j] = 1 + dp[i-1][j-1]
// 4. Else
//       dp[i][j] = max(dp[i-1][j], dp[i][j-1])
// 5. Answer = dp[n][m]

class Solution {
  public:
    int lcs(string &s1, string &s2) {
      
        int n=s1.length();
        int m=s2.length();
        vector<vector<int>> dp(n+1, vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};
