#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> getDivisor(int N){
            vector<int> res;
            for(int i=1;i<=N;i++){
                 if(N%i==0){
                    res.push_back(i);
                 }
            }
            return res;
    }
    // Time Complexity : O(N)--> we check for every number from  1 to N.
//Sapce Complexity : O(N)--> Extra space used for storing divisors.

 vector<int> getDivisor2(int N){
    vector<int> res;
    for(int i=1;i*i<=N;i++){
        if(N%i==0){
            res.push_back(i);
        
        if(i!=N/i){
            res.push_back(N/i);
        }
    }
    }
    return res;
 }   
 //tc:O(sqrt(N)):we check foe every number between  and square root of N
//  Sc:O(2*sqrt(N)):O(k):number of divisors-> extra space used for storing divisors.
};
int main(){
    Solution sol;
    int N=36;
    vector<int> result=sol.getDivisor(N);
    cout<<"Divisors of:"<<N<<": ";
    for(int val:result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;

}

