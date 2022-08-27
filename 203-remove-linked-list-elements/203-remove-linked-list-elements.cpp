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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
             return head;
        if(head -> val == val){
             head = head->next;
           return removeElements(head,val);
        }
        ListNode* t = head;
        if(t->next)
         t->next = removeElements(t->next,val);
             return head;
        
        
    }
};