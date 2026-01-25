#include<bits/stdc++.h>
using namespace std;
void merge(int* arr, int s , int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *sec=new int[len2];
    int mainarrayindex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainarrayindex++];
    }
    mainarrayindex=mid+1;
    for(int i=0;i<len2;i++){
        sec[i]=arr[mainarrayindex++];
    }
    mainarrayindex=s;
    int ind1=0;
    int ind2=0;
    while(ind1<len1 && ind2<len2){
        if(first[ind1]<sec[ind2]){
            arr[mainarrayindex++]=first[ind1++];
        }
        else{
            arr[mainarrayindex++]=sec[ind2++];
        }

    }
    while(ind1<len1){
        arr[mainarrayindex++]=first[ind1++];
    }
    while(ind2<len2){
        arr[mainarrayindex++]=sec[ind2++];
    }
    delete []first;
    delete []sec;

}
void mergesort(int* arr,int s , int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    mergesort(arr,s, mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int arr[15]={38,27,43,3,9,82,10,56,72,15,29,5,90,33,61};
    int n=15;
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
    return 0;
}

//Tc : O(n*logn) in every case
//sc : O(n) to hold the merged sub-array