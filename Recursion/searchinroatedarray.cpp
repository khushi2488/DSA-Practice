#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& arr,int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;

}
//TC : O(n)
//SC : O(1)

int search2(vector<int>& arr,int key){
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<key && key<arr[mid]){
            high=mid-1;
            }
            else{
            low=mid+1;
            }
        }
        else{
            if(arr[mid]<key && key<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
return -1;

    }
}
//O(logn)
//O(1)


int searchrec(vector<int>& arr, int low,int high, int key){
    if(low>high){
        return -1;
    }
    int mid=low+(high-low)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[low]<=arr[mid]){
        if(arr[low]<=key && key<arr[mid]){
            return searchrec(arr,low,mid-1,key);
        }
        else{
            return searchrec(arr,mid+1,high,key);
        }
    }
    else{
        if(arr[mid]<key && key<=arr[high]){
            return searchrec(arr,mid+1,high,key);
        }
        else{
            return searchrec(arr,low,mid-1,key);
        }
    }
}
//O(logn) , O(logn)