#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 2322

class Solution {
public:
    vector<vector<int>> tree;
    vector<int> subtreeXor, inTime, outTime;
    int timer = 0;
    int totalXor = 0;

    void dfs(int node, int parent, const vector<int>& nums) {
        inTime[node] = timer++;
        subtreeXor[node] = nums[node];

        for (int child : tree[node]) {
            if (child != parent) {
                dfs(child, node, nums);
                subtreeXor[node] ^= subtreeXor[child];
            }
        }

        outTime[node] = timer++;
    }

    bool isAncestor(int u, int v) {
        return inTime[u] <= inTime[v] && outTime[v] <= outTime[u];
    }

    int minimumScore(vector<int>& nums, vector<vector<int>>& edges) {
        int n = nums.size();
        tree.resize(n);
        subtreeXor.resize(n);
        inTime.resize(n);
        outTime.resize(n);

        for (auto& edge : edges) {
            tree[edge[0]].push_back(edge[1]);
            tree[edge[1]].push_back(edge[0]);
        }

        dfs(0, -1, nums);
        totalXor = subtreeXor[0];

        int minScore = INT_MAX;
        int m = edges.size();

        for (int i = 0; i < m; ++i) {
            for (int j = i + 1; j < m; ++j) {
                int a1 = edges[i][0], b1 = edges[i][1];
                int a2 = edges[j][0], b2 = edges[j][1];

                if (inTime[a1] > inTime[b1]) swap(a1, b1);
                if (inTime[a2] > inTime[b2]) swap(a2, b2);

                int x1, x2, x3;

                if (isAncestor(b1, b2)) {
                    x1 = subtreeXor[b2];
                    x2 = subtreeXor[b1] ^ subtreeXor[b2];
                    x3 = totalXor ^ subtreeXor[b1];
                } else if (isAncestor(b2, b1)) {
                    x1 = subtreeXor[b1];
                    x2 = subtreeXor[b2] ^ subtreeXor[b1];
                    x3 = totalXor ^ subtreeXor[b2];
                } else {
                    x1 = subtreeXor[b1];
                    x2 = subtreeXor[b2];
                    x3 = totalXor ^ x1 ^ x2;
                }

                int currScore = max({x1, x2, x3}) - min({x1, x2, x3});
                minScore = min(minScore, currScore);
            }
        }

        return minScore;
    }
};
