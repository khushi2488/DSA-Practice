#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
       vector<int> ans;
        int size= s.size();
        
        int middle = size/2;
        // cout<<middle<<endl;
        for(int i = 0 ; i< middle ; i++)
            {
                ans.push_back(s.top());
                s.pop();
            }
        s.pop();
        // cout<<st.top()<<endl;
        for(int i = middle ; i< size-1; i++)
            {
                ans.push_back(s.top());
                s.pop();
            }

        for(int i = ans.size()-1 ; i>=0; i--)
        {
            s.push(ans[i]);
        }
    }

    // tc : O(n)
    //Sc : O(n)
    

    // Function to delete middle element of a stack.
     void recfun(stack<int>& s , int i, int n){
    
        if(i==n/2){
            s.pop();
            return;
        }
        int ele=s.top();
        s.pop();
        recfun(s,i+1, n);
        s.push(ele);

    }
    void deleteMid(stack<int>& s) {
        // code here..
        int cnt=0;
        int n=s.size();
        recfun(s,cnt,n);
    }
    // tc , sc = O(n), O(n)
};
