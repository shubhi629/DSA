class Solution {
public:
    int minSwaps(string s) {
    stack<char>st;
    int count=0;
    for(char &ch:s){
           if(ch=='['){
            st.push(ch);
           }
           if(ch==']'){
            if(st.empty()){
                count++;
            }
            else{
                st.pop();
            }
           }
    }
    int remaining =count;//st.size()==count as it is even length so same number of [ and ] will be there 
    return (remaining+1)/2;

    }
};