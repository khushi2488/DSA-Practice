#include <bits/stdc++.h>
using namespace std;
class Solution{
    public :
      int binarysearch(vector<int>& nums,int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;



      }
    //tc->O(logN)
    //Sc->O(1)

    int binarysearch2(vector<int>& nums,int low,int high,int target){
        if(low>high){
            return -1;
        }
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            return mid;
        }
       else if(target>nums[mid]){
        return binarysearch2(nums,mid+1,high,target);

       }
       return binarysearch2(nums,low,mid-1,target);
    }
    };

    