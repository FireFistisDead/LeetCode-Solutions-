#include <string>
using namespace std;
// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 3136

class Solution {
public:
    bool containsVowel(const string& word) {
        for (char ch : word) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                return true;
        }
        return false;
    }

    bool containsConsonant(const string& word) {
        for (char ch : word) {
            ch = tolower(ch);
            if (isalpha(ch) && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
                return true;
        }
        return false;
    }

    bool isAlnumWord(const string& word) {
        for (char ch : word) {
            if (!isalnum(ch))
                return false;
        }
        return true;
    }

    bool isValid(string word) {
        if(word.length() < 3) return false;
        return isAlnumWord(word) && containsVowel(word) && containsConsonant(word);
    }
};
