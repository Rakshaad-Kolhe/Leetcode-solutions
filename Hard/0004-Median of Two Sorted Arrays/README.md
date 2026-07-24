# 4. Median of Two Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/zigzag-conversion/

---

## Acceptance Rate

54.7%

---

## Likes

9471

---

## Dislikes

15985

---

## Topics

- String

---

## Solution

```cpp
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size())
            return s;

        vector<string> rows(numRows);
        int currRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[currRow] += c;

            if (currRow == 0 || currRow == numRows - 1)
                goingDown = !goingDown;

            currRow += goingDown ? 1 : -1;
        }

        string ans;
        for (string &row : rows)
            ans += row;

        return ans;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-24T09:47:38Z
