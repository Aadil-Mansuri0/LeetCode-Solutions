// LeetCode Problem 3427: Sum of Variable Length Subarrays
// Difficulty: Easy
// Topics: Array, Prefix Sum
// Approaches provided by Aadil Mansuri:
//   1. Brute force: O(n^2) time, O(1) auxiliary space
//   2. Prefix sum: O(n) time, O(n) auxiliary space
//
// The prefix-sum approach is the active solution below.

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixsum(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefixsum[i + 1] = prefixsum[i] + nums[i];
        }

        int total = 0;

        for (int i = 0; i < n; i++) {
            int start = max(0, i - nums[i]);
            int sum = prefixsum[i + 1] - prefixsum[start];

            total += sum;
        }

        return total;
    }
};

/*
Brute-force approach also provided by Aadil:

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        int total = 0;

        for (int i = 0; i < n; i++) {
            int start = max(0, i - nums[i]);
            int sum = 0;

            for (int j = start; j <= i; j++) {
                sum += nums[j];
            }

            total += sum;
        }

        return total;
    }
};
*/
