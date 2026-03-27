#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Brute force : 
     int maxsubarraysum(vector<int> & arr){
        int maxsum=INT_MIN;
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
            }
            maxsum=max(maxsum,sum);
        }
        return maxsum;

        
     }
       //TC : O(n^2)
     //Sc : O(1)
     // kadane's algo
     int maxsubarraysum2(vector<int>& arr){
        int currsum=arr[0];
        int maxsum=arr[0];
        for(int i=1;i<arr.size();i++){
            currsum+=arr[i];
            if(currsum<0){
                currsum=0;
            }
            maxsum=max(maxsum,currsum);
        
        }
        return maxsum;
     }

     //tc : O(n)
     //sc : O(1)
   
};
