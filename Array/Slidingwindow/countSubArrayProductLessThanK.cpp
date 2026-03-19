#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n,
                                            long long k) {
        if(k<=1){
            return 0;
        }            
        long long left=0;
        long long product=1;
        long long count=0;
        for(long long right=0;right<n;right++){
        
            product*=arr[right];
            
            while(product>=k && left<=right){
            product/=arr[left];
            left++;
            }
           
            count+=(right-left+1);
            
        }
        return count;

                                                
                                                
                                                
                                            }
};

//O(N)
//O(1)