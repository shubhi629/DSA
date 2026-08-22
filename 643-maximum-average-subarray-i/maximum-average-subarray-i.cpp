class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=k-1;
        double avg=0;
        int sum=0;
        for(int a=0;a<=j;a++){
             sum+=nums[a];
        }
        double maxavg=INT_MIN;
        while(j<n){
            avg=double(sum)/k;
            maxavg=max(maxavg,avg);
            j++;
            if(j<n){
            sum+=nums[j];
            }
            sum-=nums[i];
            i++;
                  }
        return maxavg;
    }
};