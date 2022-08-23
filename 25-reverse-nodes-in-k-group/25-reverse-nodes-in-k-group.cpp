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
  ListNode* reverseKGroup(ListNode* head, int k) {
if(head == NULL){
return NULL;
}
ListNode* temp = head;
int length = 1;
while(temp!=NULL){
temp = temp->next;
length++;
}

    ListNode* curr = head;
    ListNode*forward = NULL;
    ListNode *prev = NULL;
    int count = 0; 
    
    while(count<k && curr !=NULL){
        forward = curr->next;
        curr->next = prev; 
        prev = curr;
        curr = forward;
        count++;
    }
    if(forward !=NULL && (length-k)>k){
       head->next =  reverseKGroup(forward,k);
    }
    else{
      head->next = curr;
    }
    return prev;
}
};