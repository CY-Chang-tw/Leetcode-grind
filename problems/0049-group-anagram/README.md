# [49]. [Group Anagram]

- **Problem:** [Link to LeetCode Problem](https://leetcode.com/problems/group-anagrams/)
- **Difficulty:** [Medium]
- **Tag:** `[Array]`, `[Hash]`

---

## Problem Description

題目給一個陣列裡面有些許字串，回傳值要將給的字串進行分類，若是使用相同的字母組成(Anagram)，就排在同一組

**Example 1:**
> **Input:** `strs = ["eat","tea","tan","ate","nat","bat"]`
> **Output:** `[["bat"],["nat","tan"],["ate","eat","tea"]]`
>
**Example 2:**
> **Input:** `strs = [""]`
> **Output:** `[[""]]`

---

## Thought Process

### First Thought (Brute Force)


比較清單中的每對字串，看看它們是否為 Anagram

> - 時間複雜度： O(n^2)

### Follow up (Hash with unordered_map)

1. 使用 unordered_map 來記錄已排序過的字串字母(key)，所以相同字母的不同字串就會被加到同個 key 對裡
2. 將相同字母的不同字串加到 result vector 同一個 index

> - 時間複雜度：O(n)
> - 空間複雜度：O(n * k), n 為字串數量, k 為字串最大長度