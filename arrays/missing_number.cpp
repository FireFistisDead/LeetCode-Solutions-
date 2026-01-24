// easy problem Leetcode 268

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, sum2 = 0;
        for(int i = 0; i <= n; i++) sum+= i;
        for(int i = 0; i < n; i++) sum2 += nums[i];
        return abs(sum - sum2);
    }
};