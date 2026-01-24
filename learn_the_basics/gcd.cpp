#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int GCD(int n1,int n2) {
        int maxi = 1;
        int a = min(n1, n2);
        for(int i = 2; i <= a; i++){
            if(n1 % i == 0 && n2 % i == 0){
                maxi = max(maxi, i);
            }
        }
        return maxi;
    }
};