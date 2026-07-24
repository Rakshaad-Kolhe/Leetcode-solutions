# 3514. Number of Unique XOR Triplets II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/number-of-unique-xor-triplets-ii/

---

## Acceptance Rate

42.5%

---

## Likes

98

---

## Dislikes

17

---

## Topics

- Array
- Math
- Bit Manipulation
- Enumeration

---

## Hints

- What is the maximum possible XOR value achievable by any triplet?
- Let the maximum possible XOR value be stored in <code>max_xor</code>.
- For each index <code>i</code>, consider all pairs of indices <code>(j, k)</code> such that <code>i <= j <= k</code>. For each such pair, compute the triplet XOR as <code>nums[i] XOR nums[j] XOR nums[k]</code>.
- You can optimize the calculation by precomputing or reusing intermediate XOR results. For example, after fixing an index <code>i</code>, compute XORs of pairs <code>(j, k)</code> in <code>O(n<sup>2</sup>)</code> time instead of checking all three indices independently.
- Finally, count the number of unique XOR values obtained from all triplets.

---

## Solution

```cpp
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return 1;

        unordered_set<int> pairXor;
        unordered_set<int> ans;

        for (int x : nums)
            ans.insert(x);

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                pairXor.insert(nums[i] ^ nums[j]);
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-24T05:41:52Z
