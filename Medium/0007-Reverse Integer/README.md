# 7. Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/reverse-integer/

---

## Acceptance Rate

32.2%

---

## Likes

15701

---

## Dislikes

14023

---

## Topics

- Math

---

## Solution

```cpp
while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
                return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};
        int rev = 0;
    int reverse(int x) {
public:
class Solution {
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-24T06:03:01Z
