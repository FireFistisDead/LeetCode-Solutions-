#include <vector>
#include <set>
using namespace std;
// Dont copy the above lines just copy the below solution

class Solution { 
public:
    int maxSum(vector<int>& nums) {
        set<int> st;
        for(auto& it : nums) st.insert(it); // Step 1: collect unique elements
        int sum = 0;
        for(auto& it : st) {
            if(it > 0) sum += it;           // Step 2: add only positive unique elements
        }
        if(sum == 0) return *(st.rbegin()); // Step 3: if all elements are <= 0, return the max one
        return sum;                         // Step 4: return sum of all positive unique elements
    }
};