#include <string>
using namespace std;
// Dont copy the above lines just copy the below solution
class Solution {
public:
    int possibleStringCount(string word) {
        int res = 1; 
        for(int i = 0; i < word.size(); i++){
            if(word[i] == word[i+1]){
                res++;
            }
        }
        return res;
    }
};