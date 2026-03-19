#include<bits/stdc++.h>
using namespace std;
int kthlargestsum(vector<int> &arr, int k){
    int n=arr.size();
    vector<int> sums;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            sums.push_back(sum);
        }
    }
    sort(sums.begin(),sums.end());
    return sums[k-1];
}
//TC : O(n^2 logn) logn for sorting array
//SC : O(n^2)


int kthlargest2(vector<int> &arr,int k){
    int n=arr.size();
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            pq.push(sum);

            if(pq.size()>k){
                pq.pop();

            }
        }
    }
    return pq.top();

}

// TC : O(n^2 logk)

// SC : O(k)