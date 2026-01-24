#include <vector>
#include <algorithm>
using namespace std;
// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 2410

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        int j = 0;
        sort(trainers.begin(), trainers.end());
        int res = 0;
        for(int i : players){
                // cout <<"i " << i << endl;
            while(j < trainers.size()){
                if(i <= trainers[j]){
                    // cout <<"j " << trainers[j] <<endl;
                    res++;
                    trainers[j] = 0;
                    break;
            }
            j++;
            }
        }
        return res;
    }
};