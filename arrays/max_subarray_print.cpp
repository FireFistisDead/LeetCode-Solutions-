class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];

        vector<int> curr, best;

        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            curr.push_back(nums[i]);

            if(sum > maxi){
                maxi = sum;
                best = curr;
            }

            if(sum < 0){
                sum = 0;
                curr.clear();
            }
        }

        for(int x : best)
            cout << x << " ";

        return maxi;
    }
};
