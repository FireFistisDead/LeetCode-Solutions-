#include <string>
#include <vector>
using namespace std;
// Dont copy the above lines just copy the below solution

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) return s;

        vector<string> rows(numRows);
        int row = 0;
        bool down = false;

        for (char c : s) {
            rows[row] += c;
            if (row == 0 || row == numRows - 1) down = !down;
            row += down ? 1 : -1;
        }

        string result;
        for (string& r : rows) result += r;
        return result;
    }
};
