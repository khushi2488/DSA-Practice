#include<bits/stdc++.h>
using namespace std;

stack<int> insertatbottom(stack<int> st, int x){
    stack<int> temp;
    while(!st.empty()){
        int ele=st.top();
        temp.push(ele);
        st.pop();
    }
    temp.push(x);
    while(!temp.empty()){
        int ele=temp.top();
        st.push(ele);
        temp.pop();
    }
    return st;
}

//Tc : O(n)
//Sc: avu na hpoO(n)

void recursive(stack<int> &st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int ele=st.top();
    st.pop();
    recursive(st,x);
    st.push(ele);
}
stack<int> insertatbottom(stack<int> st, int x){
    recursive(st,x);
    return st;
}
//tc: O(n)
//Sc : O(n)