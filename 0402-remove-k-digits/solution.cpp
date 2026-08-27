class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.length()==1 && k>=1) return "0";
        stack<int> st;
        for(int i=0;i<num.length();i++){
            
            if(st.empty()){
               st.push(num[i]);
            }else{
                if(st.top()>num[i] && k>0){
                    while(!st.empty() && st.top()>num[i] && k>0){
                        st.pop();
                        k--;
                    }
                    st.push(num[i]);
                    
                }else{
                    st.push(num[i]);
                    
                }
            }
        }
        string ans="";
        while(k>0){
            st.pop();
            k--;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        if(ans=="") return "0";
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i<ans.length() && ans[i]=='0'){
            i++;
        }
        string ans1="";
        while(i<ans.length()){
            ans1+=ans[i];
            i++;
        }
        if(ans1=="") return "0";
        return ans1;
            
            
            
                
    }
};
