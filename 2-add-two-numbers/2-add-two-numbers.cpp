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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        ListNode* curr = ans;
        int carry = 0;
        while(l1!=NULL|| l2!=NULL || carry!=0){
            int x,y;
            if(l1){
                x=l1->val;
                l1 = l1->next;
            }
            else{
                x=0;
            }
            if(l2){
                y=l2->val;
                l2 = l2->next;
            }
            else{
                y=0;
            }
            int sum = x+y+carry;
            carry = sum/10;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
        }
        return ans->next;
    }
    
};