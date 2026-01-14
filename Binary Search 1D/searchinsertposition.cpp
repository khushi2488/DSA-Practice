#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=target){
                return i;
            }
        }
        return n;
    }

    //tc :O(n)
    //Sc : O(1)
    int searchInsert2(vector<int>& nums, int target){
         int n=nums.size();
        int start=0;
        int end=nums.size()-1;
        int ans=n;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }

    // Tc -> O(logn)
    //Sc->O(1)
    
};