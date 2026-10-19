class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>answer;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                answer.push_back(i);
            }
        }
        return answer;
    }
};