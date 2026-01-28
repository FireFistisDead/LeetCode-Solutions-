class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1;
        int res = 0;
        for (int i = 0; i < prices.size(); i++) {
            if(prices[i] < prices[left]){
                left = i;
            } else{
                res = max(res, prices[i] - prices[left]);
            }
        }
        return res;
    }
};