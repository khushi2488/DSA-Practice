#include<bits/stdc++.h>
using namespace std;
vector<int> nextgreaterele(vector<int>& arr){
    int n=arr.size();
    vector<int> res(n,-1);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;i++){
            if(arr[j]>arr[i]){
                res[i]=arr[j];
                break;
            }
        }
        return res;
    }
}