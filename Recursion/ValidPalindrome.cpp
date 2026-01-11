#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
    int left=0;
    int right=s.length()-1;
    while(left<right){
        if(!isalnum(s[left])){
            left++;
        }
        else if(!isalnum(s[right])){
            right--;
        }
        else if(tolower(s[left])!=tolower(s[right])){
            return false;
        }
        else{
            left++;
            right--;
        }
    }
    return true;
}
//Time coplexity : O(N)
//Space Complexity : O(1)

bool ispalindrome2(string& s,int i){
    if(i>=s.length()/2){
        return true;
    }
    if(s[i]!=s[s.length()-i-1]){
        return false;
    }
    return ispalindrome2(s,i+1);
}

//Tc : O(N)
//Sc : O(N)