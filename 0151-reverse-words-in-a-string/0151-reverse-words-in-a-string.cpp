class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;

        string str="";

        for(auto ch:s){
            if(ch ==' '){
                if(!str.empty()){
                st.push(str);
                str="";
                }
            }
            else str=str+ch;
        }
        if(!str.empty()) st.push(str);
        string ans="";

        while(!st.empty()){
            ans=ans+st.top();
            st.pop();
            if (!st.empty()) {
                ans += " ";
            }
        }

        return ans;
    }
};