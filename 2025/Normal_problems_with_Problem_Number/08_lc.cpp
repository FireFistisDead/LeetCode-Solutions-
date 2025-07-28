#include <climits>
#include <string>
#include <cctype>
using namespace std;
// Dont copy the above lines just copy the below solution

class Solution {
public:
  int myAtoi(string s) {
    int i = 0, sign = 1;
    long num = 0;
    
    while (i < s.length() && s[i] == ' ') 
        i++;
    
    if (i < s.length() && (s[i] == '-' || s[i] == '+')) 
        sign = (s[i++] == '-') ? -1 : 1;
    
    while (i < s.length() && isdigit(s[i])) {
      num = num * 10 + (s[i++] - '0');
      if (num * sign <= INT_MIN) 
        return INT_MIN;
      if (num * sign >= INT_MAX) 
        return INT_MAX;
    }
    
    return num * sign;
  }
};