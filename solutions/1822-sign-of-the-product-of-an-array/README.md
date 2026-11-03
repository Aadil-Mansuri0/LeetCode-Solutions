# 1822. Sign of the Product of an Array

- **Problem:** [LeetCode 1822 — Sign of the Product of an Array](https://leetcode.com/problems/sign-of-the-product-of-an-array/)
- **Difficulty:** Easy
- **Topics:** Array, Math
- **Language:** C++
- **Submitted approach:** Track the product sign; stop when zero is found

## Problem statement

A function `signFunc(x)` returns `1` for a positive number, `-1` for a negative number, and `0` when the number is zero. Given an integer array `nums`, return the sign of the product of all its elements without needing to calculate the full product.

## Constraints

- `1 <= nums.length <= 1000`
- `-100 <= nums[i] <= 100`

## Examples

**Example 1**

```text
Input: nums = [-1,-2,-3,-4,3,2,1]
Output: 1
```

**Example 2**

```text
Input: nums = [1,5,0,2,-3]
Output: 0
```

**Example 3**

```text
Input: nums = [-1,1,-1,1,-1]
Output: -1
```

## Approach: Track the sign

1. Start with `prod = 1`, which represents a positive product.
2. Traverse the array.
3. If an element is `0`, set `prod = 0` and stop because the entire product must be zero.
4. If an element is negative, flip the current sign by multiplying `prod` by `-1`. Positive numbers do not change the sign.
5. Pass the final sign to `signFunc(prod)` and return its result.

This tracks only the sign, not the potentially large product itself.

## Complexity analysis

- **Time:** `O(n)` — each element is checked at most once.
- **Auxiliary space:** `O(1)` — only one variable is used to track the sign.

## C++ solution

This preserves the code supplied by the user, with formatting cleaned up.

```cpp
class Solution {
public:
    int signFunc(int x) {
        if (x > 0) return 1;
        else if (x == 0) return 0;
        else return -1;
    }

    int arraySign(vector<int>& nums) {
        int prod = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                prod = 0;
                break;
            }

            if (nums[i] < 0) {
                prod *= -1;
            }
        }

        return signFunc(prod);
    }
};
```

## Official reference

See the [official LeetCode problem page](https://leetcode.com/problems/sign-of-the-product-of-an-array/) for the canonical statement and test cases.
