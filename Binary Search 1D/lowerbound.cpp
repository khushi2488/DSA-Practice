#include<bits/stdc++.h>
using namespace std;

// Lower bound --> First or the smallesr index in a sorted array where the value 
// at that index is the greater than or equal to  a given key x
class Lowerbound{
    public :
    int lowerbound(vector<int> arr, int n, int x){
          for(int i=0;i<n;i++){
            if(arr[i]>=x){
                return i;
            }
          }
          return n;
    }
//tc : O(N)
//SC : O(1)

 
  int lowerbound2(vector<int> arr, int n , int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            int low=mid+1;
        }
    }
  return ans;
  }

 

};

//tc:O(logn)
//Sc:O(1)
