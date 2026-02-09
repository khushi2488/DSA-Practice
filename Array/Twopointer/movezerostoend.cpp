#include<bits/stdc++.h>
using namespace std;
void pushnonzerotoend(vector<int>& arr){
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<arr.size()){
         arr[j]=0;
         j++;
    }
}
//TC :O(n)
//SC :O(1)


void pushzerotoend2(vector<int>& arr){
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

// TC :O(n)
//SC :O(1)

