class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
           maxi=max(maxi,nums[i]);
        }
        int difference=0;
        for(int i=0;i<n;i++){
            difference+=abs(maxi-nums[i]);
        }
        return difference;
    }
};