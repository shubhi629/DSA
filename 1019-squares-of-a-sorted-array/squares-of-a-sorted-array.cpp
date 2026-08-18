class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         int n=nums.size();
        // for(int i=0;i<n;i++){
        //     nums[i]*=nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
    //t.c.=o(nlogn) s.c.=o(1)

    //tc of o(n) approach using 2 pointers
    vector<int>ans(n);
    int i=0;
    int j=n-1;
    int k=n-1;
    while(i<=j){
           if(nums[i]*nums[i]>nums[j]*nums[j]){
            ans[k]=nums[i]*nums[i];
            i++;
           }
           else{
            ans[k]=nums[j]*nums[j];
            j--;
           }
        k--;
    }
    return ans;
    }
};