class Solution {
public:
    string smallestPalindrome(string s) {
        int cnt[26] = {};

        for (char c : s)
            cnt[c - 'a']++;

        string left, mid;
        left.reserve(s.size() / 2);

        for (int i = 0; i < 26; i++) {
            left.append(cnt[i] / 2, char('a' + i));
            if (cnt[i] & 1)
                mid.push_back(char('a' + i));
        }

        string ans = left + mid;

        for (int i = left.size() - 1; i >= 0; i--)
            ans.push_back(left[i]);

        return ans;
    }
};