#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 1233

class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string> result;
        sort(folder.begin(), folder.end());
        // string res = "0";
        string prev = "";
        // int i = 0, j = 0;
        for (const string& f : folder) {
            if (prev.empty() || f.compare(0, prev.size(), prev) != 0 || f[prev.size()] != '/') {
                result.push_back(f);
                prev = f;
            }
        }

        return result;
    }
};