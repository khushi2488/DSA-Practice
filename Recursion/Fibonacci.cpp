#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    // if(n==0){
    //     cout<<0;
    // }
    // else if(n==1){
    //     cout<<1;
    // }
    // else{
    //     int fib[n+1];
    //     fib[0]=0;
    //     fib[1]=1;
    //     for(int i=2;i<=n;i++){
    //         fib[i]=fib[i-2]+fib[i-1];
    //     }
    //     for(int i=0;i<=n;i++){
    //         cout<<fib[i]<<" ";
    //     }
    // }

//tc-> O(n)
//sc-->O(n)


        if(n==0){
            cout<<0;
        }
        else{
            int seclast=0;
            int last=1;

            cout<<seclast<<" ";
            cout<<last<<" ";
            for(int i=2;i<=n;i++){
                int curr=last+seclast;
                seclast=last;
                last=curr;
                cout<<curr<<" ";
            }
        }
    return 0;
}

//tc->O(n)
//sc->O(1)

