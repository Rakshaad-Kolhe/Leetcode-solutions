# 3536. Maximum Product of Two Digits

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/maximum-product-of-two-digits/

---

## Acceptance Rate

72.1%

---

## Likes

114

---

## Dislikes

3

---

## Topics

- Math
- Sorting

---

## Hints

- Use brute force

---

## Solution

```cpp
class Solution {
public:
    int maxProduct(int n) {
        int first = 0, second = 0;

        while (n > 0) {
            int digit = n % 10;

            if (digit >= first) {
                second = first;
                first = digit;
            } else if (digit > second) {
                second = digit;
            }

            n /= 10;
        }

        return first * second;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-25T04:49:36Z

<!-- Trace ID: SYNC-20260725-8ce2d1f9 -->
