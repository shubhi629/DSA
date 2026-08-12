class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=0;
        int ans=0;
        unordered_map<int,int>mp;
        while(right<n){
            mp[nums[right]]++;
            
            while(mp[nums[right]]>1){
                mp[nums[left]]--;
                left++;
            }
            int result=0;
            for(int i=left;i<=right;i++){
                result+=nums[i];
            }
            ans=max(ans,result);
            right++;
        }
        return ans;
    }
};