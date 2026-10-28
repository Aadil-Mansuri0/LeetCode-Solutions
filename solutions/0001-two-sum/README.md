# 1. Two Sum

- **Problem:** [LeetCode 1 — Two Sum](https://leetcode.com/problems/two-sum/)
- **Difficulty:** Easy
- **Topics:** Array, Hash Table
- **Language:** C++
- **Submitted approach:** Brute force (nested loops)

## Problem statement

You are given an integer array `nums` and an integer `target`. Find two different indices whose elements add up to `target`, and return those two indices.

- Each index can be used only once.
- The problem guarantees exactly one valid pair.
- You may return the two indices in either order.

## Constraints

- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- Exactly one valid answer exists.

## Examples

**Example 1**

```text
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: nums[0] + nums[1] == 9, so the answer is [0,1].
```

**Example 2**

```text
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

**Example 3**

```text
Input: nums = [3,3], target = 6
Output: [0,1]
```

## Approach: Brute force

1. The outer loop chooses the first index `i`.
2. The inner loop checks each later index `j), starting at `i + 1`.
3. If `nums[i] + nums[j] == target`, return `{i, j}`.
4. If no pair is found, return an empty vector. Under the stated problem guarantee, a valid pair exists.

Starting `j` at `i + 1` prevents reusing the same element and avoids checking the same pair twice.

## Complexity analysis

- **Time:** `O(n^2)` in the worst case, because the nested loops examine pairs.
- **Auxiliary space:** `O(1)`, excluding the returned two-index vector.

## C++ solution

The code below preserves the brute-force solution provided by Aadil, with formatting cleaned up.

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
```

## Follow-up

The official problem asks whether you can design an algorithm faster than `O(n^2)`. A hash-map approach can be added later as a second approach in this same problem folder, without creating a duplicate entry.

---

*The statement above is a concise paraphrase for study notes. Refer to the [official LeetCode page](https://leetcode.com/problems/two-sum/) for the canonical statement and any changes.*
