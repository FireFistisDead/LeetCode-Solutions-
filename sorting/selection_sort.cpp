#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n - 1; i++){
            int minIndex = i;
            for(int j = i + 1; j < n; j++){
                if(nums[j] < nums[minIndex]){
                    minIndex = j;
                }
            }
            swap(nums[i], nums[minIndex]);
        }
        return nums;
    }
};
