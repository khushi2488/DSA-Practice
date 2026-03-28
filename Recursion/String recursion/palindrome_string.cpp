#include<bits/stdc++.h>
using namespace std;
//try it using recursion 
bool isplaindrome(string &s,int st,int end){
    if(st>=end){
            return true;
    }
    
        if(s[st]!=s[end]){
            return false;
        }
       return  isplaindrome(s,st+1,end-1);
    
}
//tc : O(n)
//sc : O(n) due to recursive stack