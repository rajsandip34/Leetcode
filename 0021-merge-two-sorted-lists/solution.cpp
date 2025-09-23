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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* b) {
        ListNode* a=list1;
        ListNode* prev;
        if(a==NULL && b!=NULL) return b;
        while(a!=NULL  && b!=NULL){
            //3 condition if equal greater and lower
            if(a->val==b->val){
                ListNode* ptr =new ListNode(b->val);
                ptr->next=a->next;
                a->next=ptr;
                a=ptr->next;
                b=b->next;
                prev=ptr;
            }
            else if(a->val < b->val){
                prev=a;
                a=a->next;
                
            }else if(a->val > b->val){
                ListNode* ptr = new ListNode(b->val);
                if(a==list1){
                    ptr->next=a;
                    list1=ptr;
                    prev=list1;
                    b=b->next;
                    continue;
                }
                ptr->next=a;
                prev->next=ptr;
                prev=ptr;
                b=b->next;
            }
                
        }
        if(b!=NULL){
            prev->next=b;
        }
        return list1;

    }
};
