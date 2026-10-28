# 3427. Sum of Variable Length Subarrays

- **Problem:** [LeetCode 3427 — Sum of Variable Length Subarrays](https://leetcode.com/problems/sum-of-variable-length-subarrays/)
- **Difficulty:** Easy
- **Topics:** Array, Prefix Sum
- **Language:** C++
- **Solutions provided:** Brute force and prefix sum

## Problem statement

You are given an integer array `nums` of size `n`. For every index `i`, define `start = max(0, i - nums[i])` and consider the subarray `nums[start ... i]`.

Return the sum of all elements across these subarrays, adding each index's subarray sum to the final answer.

## Constraints

- `1 <= nums.length <= 100`
- `1 <= nums[i] <= 1000`

## Examples

**Example 1**

```text
Input: nums = [2,3,1]
Output: 11
Explanation:
i = 0: [2]       -> sum = 2
i = 1: [2,3]     -> sum = 5
i = 2: [3,1]     -> sum = 4
Total = 2 + 5 + 4 = 11
```

**Example 2**

```text
Input: nums = [3,1,1,2]
Output: 13
Explanation:
i = 0: [3]       -> sum = 3
i = 1: [3,1]     -> sum = 4
i = 2: [1,1]     -> sum = 2
i = 3: [1,1,2]   -> sum = 4
Total = 3 + 4 + 2 + 4 = 13
```

## Approach 1: Brute force

For each index `i`:

1. Calculate `start = max(0, i - nums[i])`.
2. Run a loop from `start` through `i) and sum those elements.
3. Add that subarray sum to `total`.

- **Time:** `O(n^2)`
- **Auxiliary space:** `O(1)`

This is the first approach you supplied, preserved in the C++ file as a commented alternative.

## Approach 2: Prefix sum (active solution)

Build a prefix-sum array of size `n + 1), where `prefixsum[k]` stores the sum of the first `k` elements. For the subarray from `start` through `i), calculate its sum in constant time:

```text
sum = prefixsum[i + 1] - prefixsum[start]
```

Add each calculated subarray sum to `total`. The prefix array avoids repeatedly summing the same elements.

- **Time:** `O(n)` — one pass to build prefix sums and one pass to process every index.
- **Auxiliary space:** `O(n)` — the prefix-sum vector.

## C++ solution

The active solution in [`solution.cpp`](solution.cpp) is your prefix-sum implementation, with formatting cleaned up. Your brute-force implementation is also preserved in that file as a commented alternative.

## Official reference

See the [official LeetCode problem page](https://leetcode.com/problems/sum-of-variable-length-subarrays/) for the canonical statement and test cases.

*Note: the code and function signature match **LeetCode 3427**, not 3428.*
