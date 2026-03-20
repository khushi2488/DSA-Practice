#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int start = 0;
        int end = arr.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == k) {
                return mid;
            }
            else if (arr[mid] > k) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return -1; 
    }
};
//O(logn)
//O(1)