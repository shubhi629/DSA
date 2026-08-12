class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int maxlen = 0;

        unordered_map<char, int> mp;

        while (r < s.size()) {

            mp[s[r]]++;

            // Duplicate found
            while (mp[s[r]] > 1) {
                mp[s[l]]--;
                l++;
            }

            maxlen = max(maxlen, r - l + 1);

            r++;
        }

        return maxlen;
    }
};