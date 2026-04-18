#include <bits/stdc++.h>
using namespace std;
bool findredundant(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '+' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isR = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isR = false;
                    }
                    st.pop();
                }
                if(isR==true){
                    return true;
                }
                st.pop();
            }
            return false;
        }
        
    }
}
//O(n)
//O(n)