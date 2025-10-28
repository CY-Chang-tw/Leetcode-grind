# [347]. [Top K Frequent Elements]

- **Problem:** [Link to LeetCode Problem](https://leetcode.com/problems/top-k-frequent-elements/)
- **Difficulty:** [Medium]
- **Tag:** `[Array]`, `[Hash]`

---

## Problem Description

題目給一個陣列包含些許重複的數字，找出前 k 個重複最多的數值，以一個陣列回傳

**Example 1:**
> **Input:** `nums = [1,1,1,2,2,3], k = 2`
> **Output:** `[1,2]`
>
**Example 2:**
> **Input:** `nums = [1], k = 1`
> **Output:** `[1]`

---

## Thought Process

### Follow up (Hash with unordered_map)

1. 使用 unordered_map 來記錄數值(key) 出現的次數(value)
2. 新增一個 bucket 二為陣列存放相同出現次數的數值，其中 index 代表出現頻率，bucket[index] 存放相同頻率的數值
3. 從 bucket 最尾端(最高出現次數)開始加入 result array ，若 result.size() == k，代表已經找到前 k 多的數值

> - 時間複雜度：O(n)
> - 空間複雜度：O(n)