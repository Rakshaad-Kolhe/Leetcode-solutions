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
        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        string left = "", mid = "";

        for (int i = 0; i < 26; i++) {
            left.append(freq[i] / 2, char('a' + i));
            if (freq[i] % 2)
                mid = char('a' + i);
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-28T08:04:14Z

<!-- Trace ID: SYNC-20260728-d3d0104e -->
