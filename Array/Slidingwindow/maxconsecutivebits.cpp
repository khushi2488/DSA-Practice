#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int n=arr.size();
        int count=1;
        int maxcount=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                count++;
               maxcount=max(maxcount,count);
            }
            else {count=1;}
        }
        return maxcount;

    }
};