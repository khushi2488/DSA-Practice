#include<bits/stdc++.h>
using namespace std;
void merge(int *arr, int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *sec=new int[len2];
    int mainidx=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainidx++];
    }
    mainidx=mid+1;
    for(int i=0;i<len2;i++){
        sec[i]=arr[mainidx++];
    }
    int idx1=0;
    int idx2=0;
    int mainidx=s;
    while(idx1<len1 && idx2<len2){
        if(first[idx1]<sec[idx2]){
            arr[mainidx++]=first[idx1++];
        }
        else{
            arr[mainidx++]=sec[idx2++];
        }
    }
    while(idx1<len1){
        arr[mainidx++]=first[idx1++];
    }
    while(idx2<len2){
        arr[mainidx++]=sec[idx2++];
    }
    delete []first;
    delete []sec;

}
void mergesort(int *arr, int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
//tc: O(nlogn)in all cases
// sc: O(n)