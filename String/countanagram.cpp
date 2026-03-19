#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
   int search(string pat, string txt){
   int k=pat.length();
   int n=txt.length();
   int count=0;
   string sortedPat=pat;
   sort(sortedPat.begin(),sortedPat.end());
   for(int i=0;i<=n-k;i++){
     string sub =txt.substr(i,k);
     sort(sub.begin(),sub.end());
     if(sub==sortedPat){
        count++;
     }
}
    return count;
      }
};
//Tc : O((n-k+1)* k logk)
//Sc: O(k)
int search2(string pat, string txt){
int n=txt.length();
int k=pat.length();
int count=0;
vector<int> freq(26,0);
for(char c: pat){
    freq[c-'a']++;
}
int left=0;
for(int right=0;right<n;right++){
    freq[txt[right]-'a']--;
    if(right-left+1==k){
        bool flag=true;
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                flag=false;
                break;
            }
        }
        if(flag){
            count++;
        }
        freq[txt[left]-'a']++;
        left++;
        
    }
}
return count;

}
//tc :O(n)
//O(26)
