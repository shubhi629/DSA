class Solution {
public:
    int partitionString(string s) {
        int n=s.length();
        unordered_set<char>st;
        int count =0;//to count the number of substrings
        int i=0;
        while(i<n){
            if(st.count(s[i])){
                count++;
                st.clear();
                st.insert(s[i]);
            }
            else{ 
            st.insert(s[i]); 
            } 
            i++;
        }
        return 1+count;
    }
};