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
// TC : O(n^2)
//sc : O(n)

vector<int> nextgreaterelement2(vector<int>& arr){
    int n=arr.size();
    vector<int> res(n);
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        if(st.empty()){
            res[i]=-1;
        }
        else{
            res[i]=st.top();
        }
        st.push(arr[i]);
    }
    return res;
}
//tc : O(n)
//Sc : O(n)
