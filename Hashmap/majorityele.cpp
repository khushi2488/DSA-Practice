#include<bits/stdc++.h>
using namespace std;
class sol{
int majorityele1(vector<int> &arr){

    map<int, int> mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto i : mp){
        if(i.second>arr.size()){
                  return i.first;
        }
        return -1;
    }

}

};
//tc : O(n)
//sc : O(n)


