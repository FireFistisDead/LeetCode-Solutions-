class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane's algo
        int maxi = nums[0];
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum+=nums[i];
            maxi = max(sum, maxi);
            if(sum < 0) sum = 0;
        }
        return maxi;
    }
};