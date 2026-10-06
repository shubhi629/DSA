class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> sc;
        int count = 0;

        for(char &ch : s) {
            if(ch == '(') {
                sc.push(ch);
            }
            else if(ch == ')') {
                if(!sc.empty()) {
                    sc.pop();
                }
                else {
                    count++;
                }
            }
        }

        return count + sc.size();
    }
};