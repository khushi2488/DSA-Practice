#include<bits/stdc++.h>
using namespace std;
class solution {
public :
   vector<int> searchrange(vector<int>& nums,int target){
   vector<int> result(2,-1);
   result[0]=findfirst(nums,target);
   result[1]=findlast(nums,target);

   }


   private :
     int findfirst(vector<int>& nums, int target){
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;

     }
     int findlast(vector<int>& nums, int target){
        int l=0;
        int r=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
     }

};
//tc -->O(logn)
//sc -->O(1)
