# 3513. Number of Unique XOR Triplets I

Difficulty: Medium

---

## Problem

https://leetcode.com/problems/number-of-unique-xor-triplets-i/

---

## Language

C++

---

## Solution

```cpp
class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if(n < 3){
            return n;
        }
        int ans = 1;
        while(ans <= n){
            ans <<= 1;
        }
        return ans;
    }
};
```

---

Generated automatically by LeetCode Auto Sync

Last Updated:
2026-07-23T05:38:08Z
