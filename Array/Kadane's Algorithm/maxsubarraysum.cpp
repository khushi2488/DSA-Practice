#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
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
};

//TC: O(n^2)
//Sc:O(1)

int maxsubarraysum2(vector<int> &arr){
int maxSum=INT_MIN;
int Sum = 0;
for(int i=0;i<arr.size();i++){
Sum+=arr[i];
maxSum=max(maxSum,Sum);
if(Sum<0){
    Sum=0;
}
}

return maxSum;
}

//TC:O(n)
//SC : O(1)