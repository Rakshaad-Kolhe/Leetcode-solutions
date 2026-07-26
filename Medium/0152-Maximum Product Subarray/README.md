# 152. Maximum Product Subarray

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/maximum-product-subarray/

---

## Acceptance Rate

36.8%

---

## Likes

20691

---

## Dislikes

836

---

## Topics

- Array
- Dynamic Programming

---

## Solution

```cpp
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0)
                swap(maxProd, minProd);

            maxProd = max(nums[i], maxProd * nums[i]);
            minProd = min(nums[i], minProd * nums[i]);

            ans = max(ans, maxProd);
        }

        return ans;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-26T21:34:33Z

<!-- Trace ID: SYNC-20260726-d1298670 -->
