# 1331. Rank Transform of an Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/rank-transform-of-an-array/

---

## Acceptance Rate

73.9%

---

## Likes

2624

---

## Dislikes

123

---

## Topics

- Array
- Hash Table
- Sorting

---

## Hints

- Use a temporary array to copy the array and sort it.
- The rank of each element is the number of unique elements smaller than it in the sorted array plus one.

---

## Solution

```cpp
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> s = arr;
        sort(s.begin(), s.end());
        s.erase(unique(s.begin(), s.end()), s.end());
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = lower_bound(s.begin(), s.end(), arr[i]) - s.begin() + 1;
        }
        return arr;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-24T05:43:59Z
