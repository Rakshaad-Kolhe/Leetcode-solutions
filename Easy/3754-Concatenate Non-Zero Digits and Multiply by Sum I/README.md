# 3754. Concatenate Non-Zero Digits and Multiply by Sum I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/

---

## Acceptance Rate

66.2%

---

## Likes

264

---

## Dislikes

3

---

## Topics

- Math

---

## Hints

- Simulate as described

---

## Solution

```cpp
class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0, s = 0;
        for (char c : to_string(n))
            if (c != '0')
                x = x * 10 + c - '0', s += c - '0';
        return x * s;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-24T07:01:21Z
