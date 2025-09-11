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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int size1=0,size2=0;
        ListNode* tempA=headA;
        ListNode* tempB = headB;
        while(tempA!=NULL){
            tempA=tempA->next;
            size1++;
        }
        while(tempB!=NULL){
            tempB=tempB->next;
            size2++;
        }
        tempA=headA;
        tempB=headB;
        int size_diff=abs(size1-size2);
        if(size1>size2){
            for(int i=1;i<=size_diff;i++){
                tempA=tempA->next;
            }
            

        }else if(size1<size2){
            for(int i=1;i<=size_diff;i++){
                tempB=tempB->next;
            }
        }

        while(tempA!=NULL && tempB!=NULL){
                if(tempA==tempB) return tempA;
                tempA=tempA->next;
                tempB=tempB->next;
                
        }
        return NULL;
       
            
        
            


            
    }
};
