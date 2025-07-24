#include <vector>
#include <unordered_map>
using namespace std;
// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 1695
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int>track;
        int n = nums.size();
        int left = 0, right = 0;
        int sum = 0, max_sum = 0;
        while(right < n){
            track[nums[right]]++;
            sum += nums[right];
            if(track[nums[right]] > 1){
                while(track[nums[right]] != 1){
                    track[nums[left]]--;
                    sum -= nums[left];
                    left++;
                }
            }
            max_sum = max(max_sum, sum);
            right++;
        }
    return max_sum;
    }
};