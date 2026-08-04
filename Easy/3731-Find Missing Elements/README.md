# 3731. Find Missing Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/find-missing-elements/

---

## Acceptance Rate

87.2%

---

## Likes

211

---

## Dislikes

8

---

## Topics

- Array
- Hash Table
- Sorting

---

## Hints

- First, find the maximum and minimum elements in the array.
- Then, iterate over all the integers in the range <code>[min, max]</code> and check if they are in the array.
- If not, add them to the array, and return the sorted array at the end.

---

## Solution

```cpp
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        for (int i = 1; i < nums.size(); i++) {
            for (int x = nums[i - 1] + 1; x < nums[i]; x++) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-08-04T08:42:46Z

<!-- Trace ID: SYNC-20260804-5dfb4dc8 -->
