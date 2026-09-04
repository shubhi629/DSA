class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        int stable_index=INT_MAX;
        int score;
        for(int i=0;i<n;i++){
            int index=i;
            int max_val=nums[i];
            int min_val=nums[i];
            for(int j=0;j<i;j++){
                max_val=max(max_val,nums[j]);
            }
            for(int k=i;k<n;k++){
                min_val=min(min_val,nums[k]);
            }
        int score=max_val-min_val;
        if(score<=k){
            stable_index=min(stable_index,index);
        }
        }
        if(stable_index == INT_MAX)
    return -1;

return stable_index;
    }
};