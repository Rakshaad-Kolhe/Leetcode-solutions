# 1689. Partitioning Into Minimum Number Of Deci-Binary Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/

---

## Acceptance Rate

90.5%

---

## Likes

2843

---

## Dislikes

1547

---

## Topics

- String
- Greedy

---

## Hints

- Think about if the input was only one digit. Then you need to add up as many ones as the value of this digit.
- If the input has multiple digits, then you can solve for each digit independently, and merge the answers to form numbers that add up to that input.
- Thus the answer is equal to the max digit.

---

## Solution

```cpp
class Solution {
public:
    int minPartitions(string n) {
        char mx = '0';
        for (char c : n) {
            if (c > mx) {
                mx = c;
                if (mx == '9') return 9;   
            }
        }
        return mx - '0';
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-28T09:06:22Z

<!-- Trace ID: SYNC-20260728-eede1dd8 -->
