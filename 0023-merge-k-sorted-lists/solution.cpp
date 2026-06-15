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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        
        //creating minheap
        priority_queue<int,vector<int>,greater<int>> pq;
        for(ListNode* x : lists){
            ListNode* temp=x;
            while(temp!=NULL) {
                pq.push(temp->val);
                temp=temp->next;
            }
        }
        if(pq.empty()){
            return NULL;
        }
        ListNode* head = new ListNode(pq.top());
        pq.pop();
        ListNode* temp=head;
        while(!pq.empty()){
            ListNode* n = new ListNode(pq.top());
            temp->next=n;
            temp=temp->next;
            pq.pop(); 
        }
        return head;
    }
};
