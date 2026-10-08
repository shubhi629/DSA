class Solution {
public:
    string removeOuterParentheses(string s){
        int n=s.length();
        stack<char>st;
        string answer;
        for(char c:s){
            if(c=='('){
                if(!st.empty()){
                answer+=c;
                }
                st.push(c);
            }
            if(c==')'){
                if(st.size()>1){
                answer+=')';
                }
                st.pop();
            }
        }
        return answer;
    }
};