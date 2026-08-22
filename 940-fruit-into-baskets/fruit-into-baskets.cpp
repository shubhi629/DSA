class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();

        int i = 0;
        int j = 0;

        int basket1 = -1;
        int basket2 = -1;

        int count1 = 0;
        int count2 = 0;

        int ans = 0;

        while (j < n) {

            // Fruit belongs to basket 1
            if (fruits[j] == basket1) {
                count1++;
            }

            // Fruit belongs to basket 2
            else if (fruits[j] == basket2) {
                count2++;
            }

            // Basket 1 is empty
            else if (basket1 == -1) {
                basket1 = fruits[j];
                count1++;
            }

            // Basket 2 is empty
            else if (basket2 == -1) {
                basket2 = fruits[j];
                count2++;
            }

            // Third different fruit
            else {
                while (count1 > 0 && count2 > 0) {
                    if (fruits[i] == basket1)
                        count1--;
                    else
                        count2--;

                    i++;
                }

                if (count1 == 0) {
                    basket1 = fruits[j];
                    count1 = 1;
                } else {
                    basket2 = fruits[j];
                    count2 = 1;
                }
            }

            ans = max(ans, count1 + count2);

            j++;
        }

        return ans;
    }
};