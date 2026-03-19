#include <bits/stdc++.h>
using namespace std;
int factorial(int N){
    int ans=1;
    for(int i=1;i<=N;i++){
        ans=ans*i;
    }
    return ans;
}
//tc ->O(N), Sc --> O(1)

int factorial2(int N){
       if(N==0){
        return 1;
       }
       return N*factorial(N-1);
}
//tc -> O(N), Sc -->O(N)
