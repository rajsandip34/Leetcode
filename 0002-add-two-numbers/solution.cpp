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
        ListNode* temp=l1;
        ListNode* prev=NULL;
        int carry=0;
        while(temp!=NULL && l2!=NULL){
            int x= temp->val;
            int y=l2->val;
            int sum= x+y+carry;
            int dig =sum%10;
            temp->val=dig;
            carry =sum/10;
            prev=temp;
            temp=temp->next;
            l2=l2->next;
        }
        //edge ca
        //ifl1>l2
        while(temp!=NULL){
            int x=temp->val;
            int sum = x+carry;
            temp->val=sum%10;
            carry=sum/10;
            prev=temp;
            temp=temp->next;
        }

        //if l2>l1;
        if(l2!=NULL){
            prev->next=l2;
           
            while(l2!=NULL){
                int sum=l2->val+carry;
                l2->val=sum%10;
                carry=sum/10;
                prev=l2;
                l2=l2->next;
                
            }
        }
        if(carry!=0){
            prev->next=new ListNode(carry);
        }
        
        return l1;
        

    }
};
