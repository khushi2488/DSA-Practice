#include<bits/stdc++.h>
using namespace std;
class Solution{
   public:
      void printnumbers(int current,int n){
            if(current>n){
                         return ;
            }
            cout<<current<<" ";
            printnumbers(current+1,n);
      }

//time complexity-->O(N)
//space complexity -->O(N)


//_____________________________________________

//backtracking

 
      void printnumbers2(int current,int n){
            if(current>n){
                         return ;
            }
         
            printnumbers(current+1,n);
            cout<<current<<" ";
      }

//time complexity-->O(N)
//space complexity -->O(N)



};

