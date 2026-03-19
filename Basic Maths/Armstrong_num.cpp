#include<bits/stdc++.h>
using namespace std;
class Armstrong{
    public:
      static bool isArmstrong(int num){
        int k=to_string(num).length();
        int sum=0;
        int n=num;
        while(n>0){
             int digit=n%10;
             sum=sum+pow(digit,k);
             n=n/10;

        }
        return num==sum;
     }
};
int main(){
    int number=153;
    if(Armstrong::isArmstrong(number)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}


//tc : -->O(logn)-->every time we take digit
//SC: -->O(1)--> There is no extra space needed
