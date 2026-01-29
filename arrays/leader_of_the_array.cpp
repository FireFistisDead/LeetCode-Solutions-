class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        vector<int> res;
        int maxRight = nums.back();   // rightmost element is always a leader
        res.push_back(maxRight);

        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] > maxRight) {
                maxRight = nums[i];
                res.push_back(nums[i]);
            }
        }

        reverse(res.begin(), res.end());
        return res;
    }
};
