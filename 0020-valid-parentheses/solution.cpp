class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0) return false;
        stack<char> st;
        for(char x : s){
            if(x=='(' || x=='{' || x=='['){
                st.push(x);
            }else {
                if(st.empty()) return false;
                char c = st.top();
                if((x==')' && c=='(') || (c=='{' && x=='}') || (c=='[' && x==']')){
                    st.pop();
                }else {
                    return false;
                }

            }
        }
        return st.empty();

            
    }
};
