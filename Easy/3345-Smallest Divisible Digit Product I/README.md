# 3345. Smallest Divisible Digit Product I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/smallest-divisible-digit-product-i/

---

## Acceptance Rate

70.8%

---

## Likes

201

---

## Dislikes

19

---

## Topics

- Math
- Enumeration

---

## Hints

- You have to check at most 10 numbers.
- Apply a brute-force approach by checking each possible number.

---

## Solution

```cpp
class Solution {
public:
    int productOfDigits(int num){
        int product = 1;

        while(num){
            product *= num % 10;
            num /= 10;
        }

        return product;
    }

    int smallestNumber(int n, int t) {
        while(productOfDigits(n) % t != 0)
            n++;

        return n;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-08-06T09:46:01Z

<!-- Trace ID: SYNC-20260806-d138e86a -->
