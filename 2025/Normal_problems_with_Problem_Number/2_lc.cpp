#include<iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* nextNode): val(x), next(nextNode) {}
    /* data */
};

// Dont copy the above lines just copy the below solution
// LeetCode Problem No:- 2
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* temp = head;
        int carry = 0;
        while(l1!= nullptr || l2!= nullptr){
            int sum = 0;
            if(l1!= nullptr){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!= nullptr){
                sum += l2->val;
                l2 = l2->next;
            }
            sum += carry;
            carry = sum/10;
            temp->next = new ListNode(sum%10);
            temp = temp->next;
        }
        if(carry!= 0){
            temp->next = new ListNode(carry);
        }
        return head->next;
    }
};