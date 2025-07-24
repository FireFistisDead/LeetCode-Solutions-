#include <string>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;
// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 1717

class Solution {
public:
    int maximumGain(string s, int x, int y) {
        if (x < y) {
            swap(x, y);
            reverse(s.begin(), s.end());
        }

        int result = 0;
        result += removeAndScore(s, 'a', 'b', x);
        result += removeAndScore(s, 'b', 'a', y);
        
        return result;
    }
    int removeAndScore(string& s, char first, char second, int score) {
        vector<char> stack;
        int result = 0;
        
        for (char c : s) {
            if (!stack.empty() && stack.back() == first && c == second) {
                stack.pop_back();
                result += score;
            } else {
                stack.push_back(c);
            }
        }

        
        s = string(stack.begin(), stack.end());
        
        return result;
    }
};