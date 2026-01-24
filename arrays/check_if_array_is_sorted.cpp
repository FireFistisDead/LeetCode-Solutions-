class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] > nums[(i + 1) % n]) count++;
            if(count > 1) return false;
        }
        return true;
    }
};
/**
 * # Intuition
 * We need to check if the array is a rotation of a sorted array. A sorted array has elements in ascending order, and a rotated version can have at most **one place** where an element is greater than its next element.
 *
 * # Approach
 * Iterate through the array circularly, using `(i + 1) % n` to compare each element with the next (so the last element wraps to the first). Count the number of "drops" where `nums[i] > nums[i+1]`. If the count exceeds 1, return `false`; otherwise, return `true`.
 *
 * # Time complexity
 * `O(n)` — We iterate through the array once.
 *
 * # Space complexity
 * `O(1)` — Only a counter variable is used.
 */
