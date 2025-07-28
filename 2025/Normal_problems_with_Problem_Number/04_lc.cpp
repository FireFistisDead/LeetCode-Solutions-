#include <vector>
#include <algorithm>
using namespace std;
// Dont copy the above lines just copy the below solution

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged(nums1.size() + nums2.size() , 0);
        merge(nums1.begin(), nums1.end(), nums2.begin() , nums2.end() , merged.begin());
        sort(merged.begin(), merged.end());
        int n = merged.size();
        return (n % 2 == 0) ? (merged[n/2] + merged[(n/2) - 1]) / 2.0 : merged[(n)/2];

    }
};
