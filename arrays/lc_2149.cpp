class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int left = 0, right = 1;
        vector<int> ans(nums.size());
        for(int num : nums){
            if(num > 0){
                ans[left] = num;
                left +=2;
            } else{
                ans[right] = num;
                right+=2;
            }
        }
        return ans;
    }
};