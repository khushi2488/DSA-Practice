#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int maxproduct=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            int product=1;
            for(int j=i;j<arr.size();j++){
                product*=arr[j];
                maxproduct=max(maxproduct,product);
                
            }
          
            
        }
        return maxproduct;
        //TC :O(n^2) //SC:O(1)
        
        
        
        int maxproduct=arr[0];
        int minproduct=arr[0];
        int result=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]<0){
                swap(maxproduct, minproduct);
            }
            maxproduct=max(maxproduct*arr[i], arr[i]);
            minproduct=min(minproduct*arr[i],arr[i]);
            
            
        result=max(result,maxproduct);
        }
        return result;
        
        //Tc:O(n) //SC: O(1)
    }
};

