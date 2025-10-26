# [1]. [Two Sum]

- **Problem:** [Link to LeetCode Problem](https://leetcode.com/problems/two-sum/)
- **Difficulty:** [Easy]
- **Tag:** `[Array]`, `[Hash]`

---

## Problem Description

題目給一個陣列，要你找出陣列中兩個數值和為 target，回傳這兩個值的 index

**Example 1:**
> **Input:** `nums = [2,7,11,15], target = 9`
> **Output:** `[0,1]`
>
**Example 2:**
> **Input:** `nums = [3,2,4], target = 6`
> **Output:** `[1,2]`

---

## Thought Process

### First Thought (Brute Force)


兩層 loop，外層迴圈 i 與內層迴圈 j 的值做相加，若相加等於 target，回傳 i 與 j。
若走完 n^2 ，則回傳空 pair

> - 時間複雜度： O(n^2)

### Follow up (Hash with unordered_map)

1. 改善時間到線性，以一個 for loop 使用 unordered_map 來記下 s 出現過的 item，其中 key(hash->first) 為 nums[i]
2. 每次迭代都會檢查 umap 中 key 值，若 key 值存在 target - nums[i]，代表存在配對值，回傳 nums[i] 和 i 的 index。若走完 for loop 代表不存在合法配對，回傳空 pair

> - 時間複雜度：O(n)
> - 空間複雜度：O(n)