/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* current = head;
        stack <int> stack;
        while (current) {
            stack.push(current->val);
            current = current->next;
        }
        current = head;
        while (!stack.empty()) {
            if (current->val == stack.top()) {
                stack.pop();
                current = current->next;
            } else return false; 
        }
        return true;}
};