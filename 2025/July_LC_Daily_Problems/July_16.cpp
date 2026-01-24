#include <vector>
#include <algorithm>
using namespace std;
// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 3201

class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n = nums.size(), even = 0, od = 0, eod = 0, ode = 0;
        for(int i : nums){
            int j = i % 2;

            if(i % 2 == 0){
                even++;
                eod = ode + 1;
            } 
            else{
                od++;
                ode = eod + 1;
            }
        }
    return max({even, od, eod, ode});
    }

};