# 1664. Ways to Make a Fair Array

- **Problem:** [LeetCode 1664 — Ways to Make a Fair Array](https://leetcode.com/problems/ways-to-make-a-fair-array/)
- **Difficulty:** Medium
- **Topics:** Array, Prefix Sum
- **Language:** C++
- **Submitted approach:** Running left/right even and odd sums

## Problem statement

You are given an integer array `nums`. An index `i` is called fair if, after removing `nums[i]` and shifting the remaining elements left, the sum of elements at even indices equals the sum of elements at odd indices.

Return the number of indices that make the array fair.

## Constraints

- `1 <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^4`

## Examples

**Example 1**

```text
Input: nums = [2,1,6,4]
Output: 1
Explanation: Removing nums[1] gives [2,6,4]. The even-index sum is 2 + 4 = 6 and the odd-index sum is 6.
```

**Example 2**

```text
Input: nums = [1,1,1]
Output: 3
Explanation: Removing any element leaves an array whose even-index and odd-index sums are equal.
```

**Example 3**

```text
Input: nums = [1,2,3]
Output: 0
```

## Approach: Running sums / Prefix-sum idea

1. First calculate the total sum of values at even indices (`evenSum`) and odd indices (`oddSum`).
2. Walk through each index `i), treating it as the element to remove.
3. Subtract `nums[i]` from its original parity's right-side sum.
4. After removal, elements to the right shift one position, so their even/odd parity swaps. Therefore:
   - New even-index sum = `leftEven + oddSum`
   - New odd-index sum = `leftOdd + evenSum`
5. If these two sums are equal, increment `count`.
6. Add the current element to its original parity's left-side sum and continue.

The comparison must happen **before** adding the current element to the left sums, because the current index is the element being removed.

## Complexity analysis

- **Time:** `O(n)` — two linear passes through the array.
- **Auxiliary space:** `O(1)` — only a fixed number of sum and counter variables.

## C++ solution

This preserves the code supplied by Aadil, with formatting cleaned up.

```cpp
class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        int evenSum = 0;
        int oddSum = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                evenSum += nums[i];
            } else {
                oddSum += nums[i];
            }
        }

        int leftEven = 0;
        int leftOdd = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                evenSum -= nums[i];
            } else {
                oddSum -= nums[i];
            }

            if (leftEven + oddSum == leftOdd + evenSum) {
                count++;
            }

            if (i % 2 == 0) {
                leftEven += nums[i];
            } else {
                leftOdd += nums[i];
            }
        }

        return count;
    }
};
```

## Official reference

See the [official LeetCode problem page](https://leetcode.com/problems/ways-to-make-a-fair-array/) for the canonical statement and test cases.
