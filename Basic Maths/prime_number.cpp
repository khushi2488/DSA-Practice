#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==2){
        return true;
    }
    else{
        return false;
    }
}

//Time complexity=O(N)
//Space complexity=O(1)


bool checkprime2(int n){
    int cnt=0;
    for(int i=0;i<=sqrt(n);i++){
        if(n%i==0){
          cnt++;
        
        if(n/i!=i){
            cnt++;
        }
        }
    }
    if(cnt==2){
        return true;
    }
    else{
        return false;
    }
}

//time complexity : O(sqrt(N))
//Space complexity :O(1)