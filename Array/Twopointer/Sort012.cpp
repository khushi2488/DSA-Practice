#include<bits/stdc++.h>
using namespace std;
void sort012(vector<int>& arr){
    int n=arr.size();
    int c0=0;
    int c1=0;
    int c2=0;
for(int i=0;i<arr.size();i++){
    if(arr[i]==0){
          c0++;
    }
    else if(arr[i]==1){
        c1++;
    }
    else{
        c2++;
    }
}
int j=0;
for(int i=0;i<c0;i++){
    arr[j++]=0;
}
for(int i=0;i<c1;i++){
    arr[j++]=1;
}
for(int i=0;i<c2;i++){
    arr[j++]=2;
}

}

//TC :O(n)
//SC:O(1)

void sort012_2(vector<int>& arr){
       int i=0;
       int j=0;
       int k=arr.size()-1;
       while(j<=k){
        if(arr[j]==0){
            swap(arr[i++],arr[j++]);
        }
        else if(arr[j]==1){
            j++;
        }
        else{
            swap(arr[j],arr[k--]);
        }

       }
}
//TC O(N)
//SC : O(1)