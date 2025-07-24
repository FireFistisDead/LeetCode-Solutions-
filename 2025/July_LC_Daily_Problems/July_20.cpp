#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 1948
class Solution {
    struct TrieNode {
        unordered_map<string, TrieNode*> children;
        string name;
        bool marked = false;
    };

    TrieNode* root = new TrieNode();

    void insert(vector<string>& path) {
        TrieNode* node = root;
        for (auto& folder : path) {
            if (!node->children.count(folder)) {
                node->children[folder] = new TrieNode();
                node->children[folder]->name = folder;
            }
            node = node->children[folder];
        }
    }

    string serialize(TrieNode* node, unordered_map<string, vector<TrieNode*>>& lookup) {
        if (node->children.empty()) return "()";
        vector<string> subs;
        for (auto& child : node->children) {
            subs.push_back(child.first + serialize(child.second, lookup));
        }
        sort(subs.begin(), subs.end());
        string serial = "(";
        for (auto& s : subs) serial += s;
        serial += ")";
        lookup[serial].push_back(node);
        return serial;
    }

    void collect(TrieNode* node, vector<string>& path, vector<vector<string>>& res) {
        for (auto& child : node->children) {
            if (!child.second->marked) {
                path.push_back(child.first);
                res.push_back(path);
                collect(child.second, path, res);
                path.pop_back();
            }
        }
    }

public:
    vector<vector<string>> deleteDuplicateFolder(vector<vector<string>>& paths) {
        for (auto& path : paths) insert(path);
        unordered_map<string, vector<TrieNode*>> lookup;
        serialize(root, lookup);
        for (auto& [_, nodes] : lookup) {
            if (nodes.size() > 1) {
                for (auto& node : nodes) node->marked = true;
            }
        }
        vector<vector<string>> res;
        vector<string> path;
        collect(root, path, res);
        return res;
    }
};
