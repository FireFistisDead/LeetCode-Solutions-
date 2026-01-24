class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        if(nums.size() < 2) return -1;
        int first = nums[0], second = INT_MIN;
        int n = nums.size();
        for(int i = 1;i < n; i++){
            first = max(first, nums[i]);
        }
        for(int i = 0; i < n; i++){
            if(nums[i] != first){
                second = max(nums[i], second);
            }
        }
        if(second == INT_MIN) return -1;
        return second;
    }
};