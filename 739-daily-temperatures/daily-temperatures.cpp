class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> answer(n, 0);

        stack<pair<int, int>> st; // {temperature, span}

        for (int i = n - 1; i >= 0; i--) {
            int days = 1;
            while (!st.empty() && st.top().first <= temp[i]) {
                days += st.top().second;
                st.pop();
            }
            if (!st.empty()) {
                answer[i] = days;
            }
            else {
                answer[i] = 0;
            }

            st.push({temp[i], days});
        }

        return answer;
    }
};