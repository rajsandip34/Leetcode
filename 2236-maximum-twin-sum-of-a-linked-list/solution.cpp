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
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow= slow->next;
        }
        // now reversing second half of the ll
        ListNode* prev=NULL;
        ListNode* curr= slow;
        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
    
    //prev is our starting node from reverse
    ListNode* temp= head;
    int mx=INT_MIN;
    while(prev!=NULL){
        int m = prev->val +temp->val;
        if(m>mx) mx= m;
        temp=temp->next;
        prev=prev->next;
    }
    return mx;
}
};
