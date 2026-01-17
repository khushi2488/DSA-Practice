#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
      int floorsqrt(int n){
        int ans=0;
        for(int i=1;i*i<=n;i++){
            ans=i;
        }
       return ans;
      }
      //tc : O(√n)
//sc : O(1)


   int mysqrt2(int n){
    if(n<2){
        return n;
    }
    int l=1;
    int r=n/2;  //Any number greater than n/2 can never be the square root of n.  for example if n=36
    //  then  n/2 is 18 and sqrt(n)=6 so we can take the n/2 is last number  
    int ans=0;
    while(l<=r){
        long long  mid=l+(r-l)/2;
        if(mid*mid<=n){
              ans=mid;
              l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return ans;
   }
   //tc: O(logn)
   //sc : O(1)
};

