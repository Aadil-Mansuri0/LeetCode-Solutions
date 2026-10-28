// LeetCode Problem 1: Two Sum
// Difficulty: Easy
// Topics: Array, Hash Table (problem tags)
// Approach: Brute force (nested loops)
// Time Complexity: O(n^2)
// Auxiliary Space Complexity: O(1)
//
// Original approach provided by Aadil Mansuri.

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
