# 1508. Range Sum of Sorted Subarray Sums

- **Problem:** [LeetCode 1508 — Range Sum of Sorted Subarray Sums](https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/)
- **Difficulty:** Medium
- **Topics:** Array, Prefix Sum, Sorting
- **Language:** C++
- **Submitted approach:** Generate all subarray sums, sort them, then sum the requested range

## Problem statement

You are given an integer array `nums` and two positions, `left` and `right`. Generate the sum of every non-empty contiguous subarray, sort these sums in non-decreasing order, and return the sum of the elements from position `left` through `right` (1-indexed), modulo `10^9 + 7`.

## Constraints

- `1 <= nums.length <= 1000`
- `1 <= nums[i] <= 100`
- `1 <= left <= right <= n * (n + 1) / 2`

## Examples

**Example 1**

```text
Input: nums = [1,2,3,4], n = 4, left = 1, right = 5
Output: 13
Explanation: Sorted subarray sums are [1,2,3,3,4,5,6,7,9,10]. The first five sum to 13.
```

**Example 2**

```text
Input: nums = [1,2,3,4], n = 4, left = 3, right = 4
Output: 6
```

**Example 3**

```text
Input: nums = [1,2,3,4], n = 4, left = 1, right = 10
Output: 50
```

## Approach: Generate, sort, and sum

1. Create a vector `sub` to store the sum of every non-empty contiguous subarray.
2. Fix each starting index `i` and initialize a running `sum = 0`.
3. Move the ending index `j` from `i` to the end of the array, adding `nums[j]` to `sum` and pushing each running sum into `sub`.
4. Sort `sub` in non-decreasing order.
5. Since the problem uses 1-based positions, add elements from index `left - 1` through `right - 1` (inclusive) to `ans`.
6. Return `ans % MOD`.

## Complexity analysis

Let `n` be the number of elements and `m = n * (n + 1) / 2` be the number of non-empty subarrays.

- **Time:** `O(n^2 log n)` — generating all subarray sums takes `O(n^2)`, and sorting the `m` sums takes `O(m log m)`.
- **Auxiliary space:** `O(n^2)` — the vector stores all `m` subarray sums.

## C++ solution

This preserves the code supplied by the user, with its original approach and logic.

```cpp
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {

        const int MOD = 1e9 + 7;

        vector<int> sub;

        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = i; j < n; j++) {
                sum += nums[j];
                sub.push_back(sum);
            }
        }

        sort(sub.begin(), sub.end());

        long long ans = 0;

        for (int i = left-1  ; i <right; i++) {
            ans += sub[i];
        }

        return ans % MOD;
    }
};
```

## Official reference

See the [official LeetCode problem page](https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/) for the canonical statement and test cases.
