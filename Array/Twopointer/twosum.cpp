#include<bits/stdc++.h>
using namespace std;
// Input: arr[] = [0, -1, 2, -3, 1], target = -2
// Output: true
bool twosum(vector<int>&arr,int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
}

//TC: O(n^2)
//SC:O(1)

bool binarysearch(vector<int>& arr, int left,int right, int target){
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            return true;
        }
        if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return false;
}

bool twosum2(vector<int>&arr , int target){
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        int complement=target-arr[i];
        if(binarysearch(arr,i+1,arr.size()-1,complement)){
            return true;
        }

    }
    return false;
}

//O(logn * n)
//O(1)

bool twosum(vector<int>& arr, int target){
    sort(arr.begin(),arr.end());
    int left=0;
    int right=arr.size()-1;
    while(left<right){
        int sum=arr[left]+arr[right];
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

//O(logn *n)
//O(1)