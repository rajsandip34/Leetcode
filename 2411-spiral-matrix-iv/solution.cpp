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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> v(m,vector<int>(n,-1));
        int minr=0,minc=0;
        int maxr=m-1;
        int maxc=n-1;
        while(maxr>=minr && maxc>=minc){
            //right
            for(int j =minc;j<=maxc;j++){
                v[minr][j]=head->val;
                head=head->next;
                if(head==NULL) return v;
            }
            minr++;
            //down
            for(int j=minr;j<=maxr;j++){
                v[j][maxc]=head->val;
                head=head->next;
                if(head==NULL) return v;
            }
            maxc--;
            //left
            for(int j=maxc;j>=minc;j--){
                v[maxr][j]=head->val;
                head=head->next;
                if(head==NULL) return v;
            }
            maxr--;
            //up 
            for(int j=maxr;j>=minr;j--){
                v[j][minc]=head->val;
                head=head->next;
                if(head==NULL) return v;
            }
            minc++;

        }
        return v;

    }
};
