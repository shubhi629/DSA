class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> st;
        for(int i = 0; i < n; i++) {
            if(nums[i] % k == 0) {
                st.insert(nums[i]);
            }
        }

        int i = k;
        while(st.find(i) != st.end()) {
            i += k;
        }
        return i;
    }
};