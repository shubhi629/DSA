class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        if(n < k && m < k) return 0;

        long long  cost = 0;

        int len1 = 1;
        int len2 = n - 1;

        if(n > k) {
            while(len1 < k && len2 > k) {
                len1++;
                len2--;
            }

            cost = 1LL*len1 * len2;
        }

        int lem1 = 1;
        int lem2 = m - 1;

        if(m > k) {
            while(lem1 < k && lem2 > k) {
                lem1++;
                lem2--;
            }

            cost += 1LL*lem1 * lem2;
        }

        return cost;
    }
};