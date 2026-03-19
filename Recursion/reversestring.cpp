#include<bits/stdc++.h>
using namespace std;
void reverseString(string &s, int left, int right){
    if(left>=right){
        return ;
    }
    swap(s[left],s[right]);
    reverseString(s,left+1,right-1);
}
//O(n)
//O(n)// we use recursive stack


void reversePrint(string s, int i){
    if(i<0){
        return ;
    }
    cout<<s[i];
    reversePrint(s,i-1);
}
//O(n)
//O(n)

void reversePrint(string s,stack<char> st){
    string s="hello";
    stack<char> st;
    for(char c:s){
        st.push(c);
    }
    string rev="";
    while(!st.empty()){
       rev+=st.top();
       st.pop();
    }
    cout<<rev;
}

//time : O(n)
//Space : O(n)