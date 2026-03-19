#include<iostream>
#include<algorithm>
using namespace std;
int findGCD(int n1,int n2){
  int gcd=1;
for(int i=1;i<=min(n1,n2);i++){
       if(n1%i==0 && n2%i==0){
        gcd=i;
       }
}
return gcd;
}
//tc ->O(min(n1,n2))
//sc-->O(1)

int findGCD2(int n1,int n2){
   for(int i=min(n1,n2); i>0;i--){
    if(n1%i==0 && n2%i==0){
        return i;
    }
   }
   return 1;
}
// tc->O(min(n1,n2))
//sc->O(1)

int findGCD3(int n1,int n2){
    while(n1>0 && n2>0){
        
            if(n1>n2){
                n1=n1%n2;
            }
            else{
                n2=n2%n1;
            }
        
    }
    if(n1==0){
        return n2;
    }
    return n1;
}

//tc->O(min(n1,n2))
//sc-> O(1)

int main(){
int n1=20,n2=5;
 int gcd=findGCD(n1,n2);
 cout<<"gcd is "<<gcd<<endl;
 return 0;
}