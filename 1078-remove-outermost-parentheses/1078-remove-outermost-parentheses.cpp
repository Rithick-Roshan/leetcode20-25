class Solution {
public:
    string removeOuterParentheses(string s) {

        stack<char> st;
        string ans="";

        for(auto c:s){
            if(c=='('){
                if(!st.empty()){
                    st.push(c);
                    ans=ans+c;
                }
                else{
                    st.push(c);
                }
            }
            else{
                st.pop();
                if(!st.empty()){
                    ans=ans+c;
                }
            }
        }
        return ans;
    }
};