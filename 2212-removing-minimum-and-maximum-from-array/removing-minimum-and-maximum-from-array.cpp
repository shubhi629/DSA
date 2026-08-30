class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minIndex = 0;
        int maxIndex = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] < nums[minIndex])
                minIndex = i;

            if (nums[i] > nums[maxIndex])
                maxIndex = i;
        }

        int bothLeft = max(minIndex, maxIndex) + 1;
        int bothRight = n - min(minIndex, maxIndex);

        int minLeftMaxRight = (minIndex + 1) + (n - maxIndex);
        int maxLeftMinRight = (maxIndex + 1) + (n - minIndex);

        return min({bothLeft, bothRight,
                    minLeftMaxRight, maxLeftMinRight});
    }
};