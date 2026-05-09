#include<bits/stdc++.h>
using namespace std;
int longestuniquesubstr(string &s){
    int n=s.size();
    int maxlen=0;
    for(int i=0;i<n;i++){
        vector<int> freq(256,0);
        for(int j=i;j<n;j++){
            if(freq[s[j]]==1){
                break;
            }
            freq[s[j]]++;
            maxlen=max(maxlen,j-i+1);
        }
    }
    return maxlen;
}
// Tc :O(n^2)
//Sc : O(n)
class Solution {
public:

    int longestsubstring(string &s) {

        int n = s.size();

        int maxlen = 0;

        int start = 0;

        unordered_map<char, int> mp;

        for(int end = 0; end < n; end++) {

            char curr = s[end];

            // if character already seen inside current window
            if(mp.find(curr) != mp.end() && mp[curr] >= start) {

                start = mp[curr] + 1;
            }

            // store latest index
            mp[curr] = end;

            maxlen = max(maxlen, end - start + 1);
        }

        return maxlen;
    }
};

//TC : O(n);
//Sc : O(n);
