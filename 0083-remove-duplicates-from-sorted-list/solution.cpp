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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        //outer loop to move forward in linkedlist
        while(temp!=NULL){
            bool flag =true; //flag condition
            // inner loop to check the next element till the next node is not same;
            while( temp->next!=NULL && temp->val==temp->next->val){
                
                temp->next=temp->next->next;
                
            
            }
            temp=temp->next;
        }
        return head;
    }
};
