class Solution {
public:
    static constexpr long long LIM = 1000001;

    long long comb(int n, int k) {
        if (k < 0 || k > n) return 0;
        k = min(k, n - k);

        long long ans = 1;

        for (int i = 1; i <= k; i++) {
            ans = ans * (n - k + i) / i;
            if (ans > LIM) return LIM;
        }

        return ans;
    }

    long long countWays(vector<int>& cnt) {
        int rem = 0;
        for (int x : cnt) rem += x;

        long long ans = 1;

        for (int x : cnt) {
            if (x == 0) continue;
            ans = min(LIM, ans * comb(rem, x));
            rem -= x;
            if (ans >= LIM) return LIM;
        }

        return ans;
    }

    string smallestPalindrome(string s, int k) {
        vector<int> freq(26);

        for (char c : s)
            freq[c - 'a']++;

        string mid = "";
