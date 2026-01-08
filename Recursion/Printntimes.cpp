#include<bits/stdc++.h>
using namespace std;
class Solution{
   public :
      void PrintName(string name, int count, int N){
        if(count==N){
            return;
        }
        cout<<name<<"\n";
        PrintName(name, count+1,N);
      }
};
int main(){
    Solution sol;
    int N=5;
    string name="Khushi";
    sol.PrintName(name,0,N);
    return 0;

}
//Time complexity : O(N)
//space Complexity : O(N)
