class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(char &ch : s){
            if(st.empty()){
                st.push(ch);
            }
            else if(ch==st.top()){
                st.pop();
            }
            else{
                 st.push(ch);
            }  
        }
        string answer;
        while(!st.empty()){
            answer+=st.top();
            st.pop();
        }
        reverse(answer.begin(),answer.end());
        return  answer;
    }
};