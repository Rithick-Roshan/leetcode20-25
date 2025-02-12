import java.util.*;

class Solution {
    public String reverseWords(String s) {
        Stack<String> st = new Stack<>();
        String word = "";

        for (char ch : s.toCharArray()) {
            if (ch == ' ') {
                if (!word.isEmpty()) {
                    st.push(word);
                    word = "";
                }
            } else {
                word += ch;
            }
        }
        
        if (!word.isEmpty()) st.push(word); 

        String ans = "";
        while (!st.isEmpty()) {
            ans += st.pop();
            if (!st.isEmpty()) ans += " ";
        }

        return ans;
    }
}
