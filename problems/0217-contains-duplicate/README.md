# [217]. [Contains Duplicate]

- **Problem:** [Link to LeetCode Problem]([https://leetcode.com/problems/contains-duplicate/])
- **Difficulty:** [Easy]
- **Tag:** `[Array]`, `[Hash]`

---

## Problem Description

題目給一個 array ，要判斷陣列中是否有重複值，如果有重複：return true，反之: return false

**Example 1**
> **Input:** `nums = [1,2,3,1]`
> **Output:** `true`
>
**Example 2**
> **Input:** `nums = [1,2,3,4]`
> **Output:** `false`

---

## Thought Process

### First Thought (Brute Force)


兩層 loop，內層迴圈與外層迴圈的值做比對，若有重複回傳 true ，若兩個迴圈迭代到最後 n^2，則回傳 false

> - 時間複雜度： O(n^2)

### Follow up (Hash with unordered_set)

1. 改善時間到線性，所以選擇使用 unordered_set 來記下沒有被記錄過的值
2. 若發現有重複的值回傳 true ，如果迭代到 O(n)，代表都沒有重複值，回傳 true

> - 時間複雜度：O(n)
> - 空間複雜度：O(n)