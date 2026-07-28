class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int cnt[26] = {};

        for (int i = 0; i < n / 2; i++)
            cnt[s[i] - 'a']++;

        int idx = 0;
        for (int i = 0; i < 26; i++) {
            while (cnt[i]--)
                s[idx++] = 'a' + i;
        }

        for (int i = 0; i < n / 2; i++)
            s[n - 1 - i] = s[i];

        return s;
    }
};