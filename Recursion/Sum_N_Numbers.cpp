#include <bits/stdc++.h>
using namespace std;

class Solution{
    public :
      int SumofnaturalNumbers(int N){
        if(N==1){
            return 1;
        }
        return N+SumofnaturalNumbers(N-1);
      } 
};
int main(){
    Solution obj;
    int N;
    cin>>N;
    cout<<obj.SumofnaturalNumbers(N)<<endl;
    return 0;
}

//Time complexity--> O(N)
//Space Complexity -->O(N)