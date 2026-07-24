# 6. Zigzag Conversion

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/palindrome-number/

---

## Acceptance Rate

60.8%

---

## Likes

16122

---

## Dislikes

2940

---

## Topics

- Math

---

## Hints

- Beware of overflow when you reverse the integer.

---

## Solution

```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int rev = 0;
        int c = x;

        while (c > 0) {
            rev = rev * 10 + c % 10;
            c /= 10;
        }

        return rev == x ? true : false;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-24T09:58:35Z
