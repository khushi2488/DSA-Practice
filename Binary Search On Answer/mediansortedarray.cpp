#include<bits/stdc++.h>
using namespace std;
class Solution {
    public :
    double findmedianarray(vector<int>& nums1, vector<int>& nums2){
        vector<int>res;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                res.push_back(nums1[i++]);
            }
            else{
                res.push_back(nums2[j++]);
            }
        }
        while(i<nums1.size()){
            res.push_back(nums1[i++]);
        }
        while(j<nums2.size()){
            res.push_back(nums2[j++]);
        }
        int len=res.size();
        if(len%2==1){
            return res[len/2];
        }
        else{
            return (res[len/2-1]+res[len/2])/2.0;
        }
    }

};
//tc --> O(n+m)
///sc -->O(n+m)