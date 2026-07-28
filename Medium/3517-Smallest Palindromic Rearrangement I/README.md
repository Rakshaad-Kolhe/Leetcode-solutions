# 3517. Smallest Palindromic Rearrangement I

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/smallest-palindromic-rearrangement-i/

---

## Acceptance Rate

70.6%

---

## Likes

213

---

## Dislikes

5

---

## Topics

- String
- Sorting
- Counting Sort

---

## Hints

- Consider a palindrome as composed of two mirror-image halves.
- Construct one half (using <code>s</code>), and then the other half is its reverse to obtain the lexicographically smallest permutation.

---

## Solution

```cpp
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
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-28T08:07:48Z

<!-- Trace ID: SYNC-20260728-25c41172 -->
