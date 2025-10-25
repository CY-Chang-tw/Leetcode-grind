# [242]. [Valid Anagram]

- **Problem:** [Link to LeetCode Problem](https://leetcode.com/problems/valid-anagram/)
- **Difficulty:** [Easy]
- **Tag:** `[Array]`, `[Hash]`

---

## Problem Description

題目題目給兩個 string 判斷是否為 Anagram，若兩個字串用相同字母可以組成不同字串，回傳 true，不是相同的字母組成字串，回傳 false

**Example 1:**
> **Input:** `s = "anagram", t = "nagaram"  `
> **Output:** `true`
>
**Example 2:**
> **Input:** `s = "rat", t = "car"`
> **Output:** `false`

---

## Thought Process

### First Thought (Brute Force)


兩層 loop，外層迴圈 i 與內層迴圈 j 的值做比對，若有比對到相同 item ，繼續迭代迴圈直到 n^2，回傳 true，若內層迴圈走到最後一個元素 i 與 j 都沒有相同，代表存在不同 item，回傳 false

> - 時間複雜度： O(n^2)

### Follow up (Hash with unordered_set)

1. 改善時間到線性，以一個 for loop 使用 unordered_map 來記下 s 出現過的 item，其中 key(hash->first) 為 item，value(hash->second) 為出現次數
2. 使用 for loop 迭代 t，將出現過的 item 次數減去 hash->second(value)
3. 最後檢查 hash(unordered_map) 裡還有沒有 > 0 的 value(hash->second)，若都為 0 回傳 true，發現有大於 0 的就回傳 false

> - 時間複雜度：O(n)
> - 空間複雜度：O(k), k <= n, k 為字串中唯一字元的數量