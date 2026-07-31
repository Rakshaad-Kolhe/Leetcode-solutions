# 3016. Minimum Number of Pushes to Type Word II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/

---

## Acceptance Rate

81.9%

---

## Likes

894

---

## Dislikes

85

---

## Topics

- Hash Table
- String
- Greedy
- Sorting
- Counting

---

## Hints

- We have 8 keys in total. We can type 8 characters with one push each, 8 different characters with two pushes each, and so on.
- The optimal way is to map letters to keys evenly.
- Sort the letters by frequencies in the word in non-increasing order.

---

## Solution

```cpp
class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);

        for (char ch : word)
            freq[ch - 'a']++;

        sort(freq.begin(), freq.end(), greater<int>());

        int ans = 0;

        for (int i = 0; i < 26; i++) {
            if (freq[i] == 0) break;

            int pushes = i / 8 + 1;   
            ans += freq[i] * pushes;
        }

        return ans;
    }
};
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-31T09:43:02Z

<!-- Trace ID: SYNC-20260731-5535b87b -->
