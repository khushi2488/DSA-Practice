#include<bits/stdc++.h>
using namespace std;
int rowwithmaxones(vector<vector<int>> & matrix , int n , int m){
    int rindex=-1;
    int maxcount=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
          if(matrix[i][j]==1){
            count+=matrix[i][j];
          }
          if(count>maxcount){
            maxcount=count;
            rindex=i;
          }
        }
    }
    return rindex;
}
//TC -> O(n*m)
//SC --> O(1)
int lower_bound(vector<int>& arr , int n , int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int rowwithmaxones2(vector<vector<int>> & matrix , int n , int m){
   int cnt_max=0;
   int index=-1;
   for(int i=0;i<n;i++){
    int cnt_one=m-lower_bound(matrix[i],m, 1);
    if(cnt_one>cnt_max){
         cnt_max=cnt_one;
         index=i;
    }
   
}
return index;
}

//Tc : O(n*logm) -> n =row and m=columns
//Sc : O(1)