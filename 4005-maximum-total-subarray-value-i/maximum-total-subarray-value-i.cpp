class Solution {
public:
    long long maxTotalValue(vector<int>& arr, int k) {
        int mx = *max_element(arr.begin(), arr.end());
        int min = *min_element(arr.begin(), arr.end());
        long long  answer=1LL*k*(mx-min);
        return answer;

    }
};