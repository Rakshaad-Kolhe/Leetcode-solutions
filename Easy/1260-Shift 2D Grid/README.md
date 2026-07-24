# 1260. Shift 2D Grid

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/shift-2d-grid/

---

## Acceptance Rate

74.4%

---

## Likes

2038

---

## Dislikes

373

---

## Topics

- Array
- Matrix
- Simulation

---

## Hints

- Simulate step by step. move grid[i][j] to grid[i][j+1]. handle last column of the grid.
- Put the matrix row by row to a vector. take k % vector.length and move last k of the vector to the beginning. put the vector to the matrix back the same way.

---

## Solution

```cpp
class Solution {
public:
void reverse(vector<int> &nums,int start,int end){
        for(int i=start,j=end;i<j;i++,j--){
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int ro = grid.size();
        int col = grid[0].size();
        vector<int> v;
        for(auto &gri:grid){
            for(auto &val:gri){
                v.push_back(val);
            }
        }
        k = k % v.size();
        reverse(v,0,v.size()-k-1);
        reverse(v,v.size()-k,v.size()-1);
        reverse(v,0,v.size()-1);
        int vec = 0;
        for(int i=0;i<ro;i++){
            for(int j=0;j<col;j++){
                grid[i][j] = v[vec];
                vec++;
            }
        }
        return grid;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-24T07:29:45Z
