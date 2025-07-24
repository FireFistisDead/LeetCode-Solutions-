#include <vector>
#include <unordered_map>
using namespace std;
// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 1

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>temp;
        for(int i = 0; i < nums.size(); i++){
            int co = target - nums[i];
            if(temp.find(co) != temp.end()){
                return {temp[co], i};
            }
            temp[nums[i]] = i;
        }
        return nums;
    }
};