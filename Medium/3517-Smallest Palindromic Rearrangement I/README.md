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
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-28T08:06:04Z

<!-- Trace ID: SYNC-20260728-b3fdb68a -->
