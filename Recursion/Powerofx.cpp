#include<bits/stdc++.h>
using namespace std;
//power of x
int power(int x, int n){
    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}
int reversenumber(int n, int rev=0){
  if(n==0){
    return rev;
  }   
  return reversenumber(n/10,rev*10+(n%10));
}
long long power2(int x, int n){
    if(n==0){
        return 1;
    }
    long long half=power(x,n/2);
    if(n%2==0){
        return half*half;
    }
    else{
        return x*half*half;
    }
}
//reverse : O(n)
// Power: O(logn)