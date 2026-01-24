#include<iostream>
using namespace std;

class stringops{
    bool palindrome(string st, int left, int right){
        if(left >=  right) return true;
        if(st[left] != st[right])return false;
        return palindrome(st, left + 1, right - 1);
    }
};