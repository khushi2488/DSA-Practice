#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long result = 0;
        int num = x;

        while (num != 0) {
            result = result * 10 + num % 10;
            num /= 10;
        }

        return result == x;
    }
};

//Time complexity --> O(logn),because we process digits of the number
//Space Complexity --> O(1),since only constant extra space is used
