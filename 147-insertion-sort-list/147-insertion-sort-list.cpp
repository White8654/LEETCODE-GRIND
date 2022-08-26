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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL || head->next == NULL)
            return head;
        return insert(head);
//         ListNode* t = head;
//         ListNode* n;
//         ListNode* p = head;
        
        
//         int x = t->val;
//         t = t->next;
//         while(t){
           
//             if(t->val > x ){
//                 n = t->next;
//                 p->next =NULL;
//                 insert(head,t->val);
//                 p->next = n;
//             }
//             p = t;
//             x = t->val;
//             t=t->next;
//         }
//         return head;
        
    }
//     void insert(ListNode* &head,int data){
//         ListNode* t = head;
//         ListNode* p ;
        
//         while( t && t->val < data){
//             t=t->next;
//         }
        
//         if(t||t->next ){
//             p = t->next;
//             ListNode* y = new ListNode(data);
//             t->next = y;
//             y->next = p;
//         }
        
//         return;
        
//     }
    ListNode* insert(ListNode* head)
    {
        ListNode* ptr=head->next;
        while(ptr)
        {
            ListNode* ptr2=head;
            while(ptr2!=ptr)
            {
                if(ptr->val<ptr2->val)
                    swap(ptr->val,ptr2->val);
                ptr2=ptr2->next;
            }
            ptr=ptr->next;
        }
        return head;
    }

};