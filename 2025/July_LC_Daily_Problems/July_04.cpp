#include <vector>
#include <cmath>
using namespace std;
// Dont copy the above lines just copy the below solution
class Solution {
public:
    
    char kthCharacter(long long k, vector<int>& operations) {
        if(k==1)return 'a';

        int i = ceil(log2(k));
        i--;
        if(operations[i]==0) return kthCharacter(k-pow(2,i),operations);

        else return (kthCharacter(k-pow(2,i),operations)-'a'+1)%26+'a';
        

        
    }
};