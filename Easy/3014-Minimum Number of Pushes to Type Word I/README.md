# 3014. Minimum Number of Pushes to Type Word I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/

---

## Acceptance Rate

67.5%

---

## Likes

211

---

## Dislikes

38

---

## Topics

- Math
- String
- Greedy

---

## Hints

- We have 8 keys in total. We can type 8 characters with one push each, 8 different characters with two pushes each, and so on.
- The optimal way is to map letters to keys evenly.

---

## Solution

```cpp
class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;

        for (int i = 0; i < word.size(); i++) {
            ans += (i / 8) + 1;
        }

        return ans;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-30T00:34:38Z

<!-- Trace ID: SYNC-20260730-f645dd2d -->
