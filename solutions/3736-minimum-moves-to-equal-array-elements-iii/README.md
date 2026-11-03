# 3736. Minimum Moves to Equal Array Elements III

- **Problem:** [LeetCode 3736 — Minimum Moves to Equal Array Elements III](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/)
- **Difficulty:** Easy
- **Topics:** Array, Math
- **Language:** C++
- **Submitted approach:** Find the maximum and total sum, then use the difference

## Problem statement

You are given an integer array `nums`. In one move, you can increase any one element by `1`. Return the minimum number of moves needed to make every element equal.

## Constraints

- `1 <= nums.length <= 100`
- `1 <= nums[i] <= 100`

## Examples

**Example 1**

```text
Input: nums = [2,1,3]
Output: 3
Explanation: Increase 2 to 3 using one move, and increase 1 to 3 using two moves.
```

**Example 2**

```text
Input: nums = [4,4,5]
Output: 2
Explanation: Increase each of the two 4s to 5.
```

## Approach: Maximum value and total sum

1. Store the array length in `n`.
2. Initialize `maxx` with the first element and calculate the total sum of all elements in `sum`.
3. While traversing the array, keep updating `maxx` to the largest value.
4. Since elements can only be increased, every element must reach at least the current maximum. The minimum target is therefore `maxx`.
5. The sum after making all `n` elements equal to `maxx` would be `n * maxx`. Subtracting the current sum gives the total increments required: `n * maxx - sum`.

## Complexity analysis

- **Time:** `O(n)` — one pass through the array.
- **Auxiliary space:** `O(1)` — only a few variables are used.

## C++ solution

This preserves the code supplied by the user, with the same approach and logic.

```cpp
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxx = nums[0];
        int sum = 0 ;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            maxx = max(maxx, nums[i]);
        }
        int total = n * maxx;
        int sub = total - sum;
        return sub;
    }
};
```

## Official reference

See the [official LeetCode problem page](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/) for the canonical statement and test cases.
