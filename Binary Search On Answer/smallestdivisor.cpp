#include<bits/stdc++.h>
using namespace std;
class Solution{
    public :
     int smalllestDivisor(vector<int>& nums,int threshold){
        int l=1;
        int r=*max_element(nums.begin(),nums.end());
        while(l<r){
            int mid=l+(r-l)/2;
            int total=0;
            for(int num:nums){
                total+=(num+mid-1)/mid;
            }
            if(total>threshold){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return l;

     }
};

//tc : O(logn)
//sc --> O(1)