#include <string>
using namespace std;
// Dont copy the above lines just copy the below solution
class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while(word.size() <= k){
            string temp = "";
            for(char i : word){
                i += 1;
                temp += i;
            }
            word += temp;
        }
        return word[k - 1];
    }
};