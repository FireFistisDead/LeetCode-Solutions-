#include <vector>
#include <algorithm>
using namespace std;

// Bubble Sort Implementation by me 
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] <= nums[j]) swap(nums[i], nums[j]);
            }
        }
        return nums;
    }
};


// Bubble Sort Implementation from Chatgpt
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(nums[j] > nums[j + 1]){
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
        return nums;
    }
};
