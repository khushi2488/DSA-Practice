// kth element in the 2 sorted array
#include<bits/stdc++.h>
using namespace std;
int kethelement(int a[], int b[], int m , int n , int k){
   int i=0;
   int j=0;
   while(i<m && j<n){
    if(a[i]<=b[j]){
        if(k==1){
            return a[i];
        }
        i++;
        
    }else{
        if(k==1){
            return b[j];
        }
        j++;

    }
    k--;
}
   
   if(i<m){
    return a[i+k-1];
   }
   return b[j+k-1];
}


//Tc :O(m+n)
//Sc : O(1)



//Try it using the BS Method 

