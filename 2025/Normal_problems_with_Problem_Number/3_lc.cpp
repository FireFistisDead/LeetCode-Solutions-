#include <unordered_set>
#include <algorithm>
#include <string>
using namespace std;
// Dont copy the above lines just copy the below solution

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char> charSet;
        int len = 0, mk = 0;
        
        for(int i = 0; i < n; i++) {
            len = 0;
            charSet.clear();
            
            for(int j = i; j < n; j++) {
                if(charSet.find(s[j]) == charSet.end()) {
                    charSet.insert(s[j]);
                    len++;
                } else {
                    break;
                }
            }
            
            mk = max(len, mk);
        }
        
        return mk;
    }
};