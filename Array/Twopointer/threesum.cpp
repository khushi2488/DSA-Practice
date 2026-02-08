#include<bits/stdc++.h>
using namespace std;
class Solution{
   public :
        bool hasTripletsum(vector<int>& arr, int target){
            int n=arr.size();
        //     for(int i=0;i<n;i++){
        //         for(int j=i+1;j<n;j++){
        //             for(int k=j+1;k<n;k++){
        //                     if(arr[i]+arr[j]+arr[k]==target){
        //                         return true;
        //                     }
        //                 }
        //             }
        //         }
        //         return false;


        //     }
            //tc : O(n^3)
            //sc : O(1)



   sort(arr.begin(),arr.end());
   for(int i=0;i<n-2;i++){
    int left=i+1;
    int right=n-1;
    while(left<right){
        int sum=arr[i]+arr[left]+arr[right];
        if(sum==target){
            return true;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return false;
   }



}



};