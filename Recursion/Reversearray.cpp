#include <bits/stdc++.h>
using namespace std;
vector<int> reversearray(vector<int>& arr){
    int n=arr.size();
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[i]=arr[n-1-i];
    }
    return ans;
}

//tc -> O(N)
//sc--> O(N)

void reversearray2(vector<int>& arr){
    int p1=0;
    int p2=arr.size()-1;
    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }
}
//tc -> O(N)
//Sc->O(1)


void reversearray3(vector<int>& arr){
    reverse(arr.begin(),arr.end());
}
//Tc-->O(N)
//Sc--O(1)
