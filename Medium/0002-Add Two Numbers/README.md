# 2. Add Two Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange)

![Language](https://img.shields.io/badge/Language-C%2B%2B-blue)

---

## Problem

https://leetcode.com/problems/add-two-numbers/

---

## Acceptance Rate

48.9%

---

## Likes

37078

---

## Dislikes

7278

---

## Topics

- Linked List
- Math
- Recursion

---

## Solution

```cpp
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int digit1 = (l1 != nullptr) ? l1->val : 0;
            int digit2 = (l2 != nullptr) ? l2->val : 0;

            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode*
```

---

Generated automatically by LeetCode Auto Sync.

Last Updated:
2026-07-24T06:10:40Z
