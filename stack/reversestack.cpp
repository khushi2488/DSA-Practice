#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
        int n=st.size();
        vector<int>res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        for(int i=0;i<res.size();i++){
            st.push(res[i]);
        }
        
        
        
        
    }

void reversestack(stack<int>& s){
    stack<int> temp;
    while(!s.empty()){
    temp.push(s.top());
    s.pop();
    }
s=temp;
}

void reversestack(stack<int> &st){
    int n=st.size();
    vector<int> res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    for(int i=0;i<res.size();i++){
        st.push(res[i]);
    }
}
//O(n),O(n)

};