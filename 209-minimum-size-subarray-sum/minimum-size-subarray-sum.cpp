class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int length =0;
        int min_length = INT_MAX;
        int i = 0;
        int j = 0;
        int sum = 0;

        while (j < n) {
                sum += nums[j];
                length++;
            
                while (sum >= target) {
                    min_length = min(length, min_length);
                    sum -= nums[i];
                    i++;
                    length--;
                }
                j++;
            
        }

        return min_length == INT_MAX ? 0 : min_length;
    }
};