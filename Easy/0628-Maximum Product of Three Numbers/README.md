# 628. Maximum Product of Three Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/maximum-product-of-three-numbers/

---

## Acceptance Rate

48.0%

---

## Likes

4790

---

## Dislikes

732

---

## Topics

- Array
- Math
- Sorting

---

## Solution

```cpp
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        for (int x : nums) {
            if (x >= max1) {
                max3 = max2;
                max2 = max1;
                max1 = x;
            } else if (x >= max2) {
                max3 = max2;
                max2 = x;
            } else if (x > max3) {
                max3 = x;
            }

            if (x <= min1) {
                min2 = min1;
                min1 = x;
            } else if (x < min2) {
                min2 = x;
            }
        }

        return max(max1 * max2 * max3, max1 * min1 * min2);
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-26T19:48:43Z

<!-- Trace ID: SYNC-20260726-983ea6ae -->
