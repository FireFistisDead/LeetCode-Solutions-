class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int res = 0, temp = 0; 
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1) temp++;
            else{
                res = max(res, temp);
                temp = 0;
            }
        }
        res = max(temp, res);
        return res;
    }
};