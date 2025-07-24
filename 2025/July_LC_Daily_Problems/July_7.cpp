#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
// Dont copy the above lines just copy the below solution

class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        int i = 0, n = events.size(), day = 0, res = 0;
        while(i < n || !pq.empty()){
            if(pq.empty()){
                day = events[i][0];
            }
            while(i < n && events[i][0] <= day){
                pq.push(events[i++][1]);
            }
            while(!pq.empty() && pq.top() < day){
                pq.pop();
            }

            if(!pq.empty()){
                pq.pop();
                res++;
                day++;
            }
        }
    return res;
    }
};