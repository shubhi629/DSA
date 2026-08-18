class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        //to store freq of each digit in array
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        int ans=-1;
        int lc=nums[0];
        int rc=nums[n-1];
        int maxi = *max_element(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            if(k==1){
                if(mp[nums[i]]==1){
                    ans=max(ans,nums[i]);
                }
            }
        }
        if(k==1){
            return ans;
        }
        
        if(k==n){
            return maxi;
        }

       if(mp[lc]==1 &&mp[rc]==1){
        ans= max(lc,rc);
       }
       if(mp[lc]==1 &&mp[rc]!=1){
        ans=lc;
       }
        if(mp[lc]!=1 &&mp[rc]==1){
        ans=rc;
       }

        return ans;
    }
};