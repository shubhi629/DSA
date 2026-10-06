class Solution {
public:
    string removeStars(string s) {
        // stack<char>st;
        // stack<char>temp;
       //trying using 2 stacks 
       //pushing all elements in stack st
      /* for(int i=s.size()-1;i>=0;i--){
       st.push(s[i]);
      }
       while(!st.empty()){
         if(st.top()!='*'){
             temp.push(st.top());
             st.pop();
         }
         else{
             st.pop();
             temp.pop();
        }
        }
    string answer;
    while(!temp.empty()){
        answer+=temp.top();
        temp.pop();
    }
    reverse(answer.begin(),answer.end());
    return answer;*/
        stack<char> st;

        for(char ch : s) {
            if(ch == '*') {
                st.pop();
            }
            else {
                st.push(ch);
            }
        }

        string answer;

        while(!st.empty()) {
            answer += st.top();
            st.pop();
        }

        reverse(answer.begin(), answer.end());

        return answer;
    

    }
};