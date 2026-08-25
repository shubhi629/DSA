class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            if(nums[i]%k==0){
               st.insert(nums[i]); 
            }
        }
        
            for(int i=k;i<=k*1000;i+=k){
                if(st.find(i)==st.end()){
                    return i;
                }
            }
        return -1;
        
    }
};