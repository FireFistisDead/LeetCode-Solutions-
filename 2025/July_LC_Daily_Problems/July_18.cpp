#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 2163

class Solution {
public:
    long long minimumDifference(vector<int>& nums) {
        int n = nums.size();
        int remove = n / 3;
        long long sum = 0;
        // long long s1 = 0, s2 = 0;
        vector<long long>prefix(n, 0);
        vector<long long>suffix(n, 0);
        priority_queue<int>max_heap;
        priority_queue<int, vector<int>, greater<int>>min_heap;
        long long res = LLONG_MAX;
        // min_heap.push(nums[n - 1]);
        for(int i = n - 1; i >= 0; i--){
            sum+=nums[i];
            min_heap.push(nums[i]);
            if(min_heap.size() > remove){
                sum -= min_heap.top();
                min_heap.pop();
            }
            if(min_heap.size() == remove){
                suffix[i] = sum;
            }
        }
        sum = 0;
        for(int i = 0; i < n ; i++){
            max_heap.push(nums[i]);
            sum += nums[i];
            if (max_heap.size() > remove) {
                sum -= max_heap.top();
                max_heap.pop();
            }
            if (max_heap.size() == remove)
                prefix[i] = sum;
        }

        for(int i = remove - 1; i < 2*remove; i++){
            res = min(res, prefix[i] - suffix[i + 1]);
        }
        return res;
    }
};