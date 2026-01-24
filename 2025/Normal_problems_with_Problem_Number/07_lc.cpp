#include <algorithm>
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
// Dont copy the above lines just copy the below solution

class Solution {
public:
    int reverse(int x) {
        string str = to_string(x);
        cout << str;
        string str2, st;
        for(char ch : str){
            if(ch == '.' || ch == 'e' || ch == '-'){
                st += ch;
            }
            cout << str2 << endl;
            str2.push_back(ch);
        }
       std::reverse(str2.begin(), str2.end());
       cout << str2;
       if(str2[str.length() - 1] == 0){
        str2.erase(str.length() - 1, 1);
       }
       try{
       return stoi(st + str2);
       } catch (const out_of_range& e){
        return 0;
       }
    }
};