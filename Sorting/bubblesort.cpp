#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>& arr, int n){
    for(int i=0;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;

            }
        }
        if(swapped==false){
            break;
        }
    }
}
//Tc in best case is -->O(n)
//Tc in average and worst case is -->O(n^2)
//Sc is --> O(1)