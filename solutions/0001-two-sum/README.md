# 1. Two Sum

- **Problem:** [LeetCode 1 — Two Sum](https://leetcode.com/problems/two-sum/)
- **Difficulty:** Easy
- **Problem topics:** Array, Hash Table
- **Solution approach stored here:** Brute force using nested loops
- **Language:** C++

## Problem summary

Given an integer array `nums` and an integer `target`, return the indices of two distinct elements whose values add up to `target`. The problem guarantees exactly one valid answer, and the returned indices may be in either order. See the [official statement](https://leetcode.com/problems/two-sum/).

## Examples

- `nums = [2, 7, 11, 15], target = 9` → `[0, 1]`
- `nums = [3, 2, 4], target = 6` → `[1, 2]`
- `nums = [3, 3], target = 6` → `[0, 1]`

## Approach: Brute force

Use two loops. For every index `i`, check each later index `j` starting at `i + 1`. If `nums[i] + nums[j] == target`, return `{i, j}`. Starting `j` at `i + 1` prevents using the same array element twice and avoids checking a pair twice.

## Complexity

- **Time:** `O(n^2)` in the worst case, because pairs are checked with nested loops.
- **Auxiliary space:** `O(1)`, excluding the returned two-index vector.

## Notes

This file preserves the brute-force approach provided by Aadil. LeetCode's follow-up asks for a solution faster than `O(n^2)`; a hash-map approach can be added later as a second approach in this same problem folder, without creating a duplicate problem entry.
