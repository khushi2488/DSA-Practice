#include<bits/stdc++.h>
using namespace std;

class Maths{
public :
  int findfloor(int arr[],int n, int x){
    int low=0;
    int high=n-1;
    int ans=-1;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]=x){
            ans=arr[mid];
        }
        else if (arr[mid]>x){
          ans=arr[mid];
           low=mid+1;
        }
        else{
          high=mid-1;
        }
     }
     return ans;
  }

  //Tc : O(logn)
  //Sc ; O(1)


  //find the ceil 

  int findceil(int arr[],int n, int x){
    int low=0;
    int high=n-1;
    int ans=-1;
     while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]=x){
            ans=arr[mid];
        }
        else if (arr[mid]>x){
          ans=arr[mid];
           high=mid-1;
        }
        else{
          low=mid+1;
        }
     }
     return ans;
  }

  //TC: O(n)
  //Sc : O(1)

};
