#include<bits/stdc++.h>
using namespace std;
int search(string &pat, string &txt){
    int k=pat.length();
    int n=txt.length();
    int count=0;
    string sortedpat=pat;
    sort(sortedpat.begin(),sortedpat.end());
    for(int i=0;i<=n-k;i++){
        string temp=txt.substr(i,k);
        sort(temp.begin(),temp.end());

        if(temp==sortedpat){
            count++;
        }
    }
    return count;

}
//Time complexity : O(klogk)
