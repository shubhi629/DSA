class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int n = nums.size();

        int i = 0;
        int j = 0;
        int sum = 0;
        int count = 0;

        while (j < n) {

            // Add new element to the window
            sum += nums[j];

            // If sum becomes greater than goal,
            // shrink from the left
            while (sum > goal) {
                sum -= nums[i];
                i++;
            }

            // If sum == goal, count all possible
            // starting positions
            if (sum == goal) {

                int temp = i;

                while (temp <= j) {

                    count++;

                    // If we remove a 1,
                    // sum will become less than goal.
                    if (nums[temp] == 1)
                        break;

                    // nums[temp] == 0,
                    // so removing it keeps sum == goal.
                    temp++;
                }
            }

            // Move right pointer
            j++;
        }

        return count;
    }
};