/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* node;
    bool hasCycle(ListNode *head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow) {
                node = fast;
                return true;
            }
            
        }
        return false;
        
    }
    ListNode *detectCycle(ListNode *head) {
        bool flag = hasCycle(head);
        if(flag==false) return NULL;
        ListNode* t = head;
        while(1){
            if(t==node) return node;
            node=node->next;
            t=t->next;
        }
        return t;
    }
};
