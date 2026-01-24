#include <vector>
#include <algorithm>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 1290

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int num = temp -> val;
        temp = temp -> next;
        while(temp != nullptr){
            num = (num << 1) | temp -> val;
            temp = temp -> next;
        }
        return num;
    }
};