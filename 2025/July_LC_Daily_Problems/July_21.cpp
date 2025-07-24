#include <string>
using namespace std;
// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 1957

class Solution {
public:
    string makeFancyString(string s) {
        string result = "";
        int count = 1;
        
        if (s.size() < 3) return s;

        result += s[0];

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                count = 1;
            }
            
            if (count < 3) {
                result += s[i];
            }
        }
        
        return result;
    }
};