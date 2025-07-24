#include <vector>
#include <unordered_map>
using namespace std;
// Dont copy the above lines just copy the below solution

class FindSumPairs {
public:
    vector<int> temp1;
    vector<int> temp2;
    unordered_map<int,int>freq;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this -> temp1 = nums1;
        this -> temp2 = nums2;
        for(int num : temp2){
            freq[num]++;
        }
    }
    
    void add(int index, int val) {
        int oldVal = temp2[index];
        freq[oldVal]--;
        if (freq[oldVal] == 0) {
            freq.erase(oldVal);
        }
        temp2[index] += val;
        freq[temp2[index]]++;
    }
    
    int count(int tot) {
        int res = 0;
        for(int i : temp1){
            int comp = tot - i;
            if(freq.find(comp) != freq.end()){
                res += freq[comp];
            }
        }
        return res;
    }
};

