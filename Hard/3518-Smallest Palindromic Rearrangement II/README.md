# 3518. Smallest Palindromic Rearrangement II

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/smallest-palindromic-rearrangement-ii/

---

## Acceptance Rate

32.9%

---

## Likes

167

---

## Dislikes

15

---

## Topics

- Hash Table
- Math
- String
- Combinatorics
- Counting

---

## Hints

- Only build <code>floor(n / 2)</code> characters (the rest are determined by symmetry).
- Count character frequencies and use half the counts for construction.
- Incrementally choose each character (from smallest to largest) and calculate how many valid arrangements result if that character is chosen at the current index.
- If the count is at least <code>k</code>, fix that character; otherwise, subtract the count from <code>k</code> and try the next candidate.
- Use combinatorics to compute the number of permutations at each step.

---

## Solution

```cpp
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

        for (int i = 0; i < 26; i++) {
            if (freq[i] & 1)
                mid.push_back(char('a' + i));
            freq[i] /= 2;
        }

        if (countWays(freq) < k)
            return "";

        string left;

        int len = s.size() / 2;

        for (int pos = 0; pos < len; pos++) {
            for (int c = 0; c < 26; c++) {
                if (freq[c] == 0) continue;

                freq[c]--;

                long long ways = countWays(freq);

                if (ways >= k) {
                    left.push_back(char('a' + c));
                    break;
                }

                k -= ways;
                freq[c]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-29T08:42:36Z

<!-- Trace ID: SYNC-20260729-baccb34c -->
