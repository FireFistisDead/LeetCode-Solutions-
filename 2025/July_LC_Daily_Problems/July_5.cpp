#include <vector>
#include <cmath>
using namespace std;
// Dont copy the above lines just copy the below solution
class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>temp(501, 0);
        for(int i = 0; i < arr.size(); i++){
            temp[arr[i]]++;
        }
        // sort(temp.rbegin(), temp.rend());
        for(int i = 499; i > 0; i--){
            if(temp[i] == i) return i;
        }
        return -1;
    }
};