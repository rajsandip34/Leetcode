class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        
        vector<int> ans(heights.size(),0);
        int n = heights.size();
        stack<int> st;
        st.push(heights[n-1]);
        int i=n-2;
        
        while(i>=0){
            int count=0;
            while(!st.empty() && st.top()<heights[i]){
                st.pop();
                count++;
            }
            if(!st.empty()){
                count++;
            }
            
            ans[i]=count;
            st.push(heights[i]);
            i--;
        }
        
        
        return ans;

    }
};
