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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* tail;

        int size=0;
        while(temp!=NULL){
            size++;
            if(temp->next==NULL){
                tail=temp;
            }
            
            temp=temp->next;
            
        }
        
        temp=head;
        if(size==0 || size==1) return head;
        k=k%size;
        if(k==0) return head;
        
        int i=1;
        while(i<size-k){
            temp=temp->next;
            i++;
        }
        ListNode* newHead=temp->next;
        temp->next=NULL;
        tail->next=head;
        
        return newHead;

    }
};
