class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==0) return 0;
        priority_queue<int> pq;
        for(int x:stones){
            pq.push(x);
        }
        while(pq.size()>1){
            int m1=pq.top();
            pq.pop();
            int m2 = pq.top();
            pq.pop();
            pq.push(abs(m1-m2));
        }
        return pq.top();
            
    }
};
