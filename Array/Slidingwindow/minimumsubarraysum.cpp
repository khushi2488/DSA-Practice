#include<bits/stdc++.h>
using namespace std;
vector<int> minimumsubarraysum(vector<int> arr){
    int n=arr.size();
    vector<int> result;
    for(int i=0;i<n;i++){
        int sum=arr[i];
        int minsum=sum;
        for(int j=i+1;j<n;j++){
            sum+=arr[j];
            minsum=min(minsum,sum);

        }
        result.push_back(minsum);
    }

    return result;
}
//TC : O(N^2)
//SC : O(N)
vector<int> minimumsubarraysum2(vector<int> arr){
    int n=arr.size();
    vector<int> result(n);
    int currmin=arr[n-1];
    result[n-1]=currmin;
    for(int i=n-2;i>=0;i--){
        currmin=min(arr[i],currmin+arr[i]);
        result[i]=min(currmin,result[i+1]);
    }

    return result;
}

//TC :O(N)
//SC :O(N)
