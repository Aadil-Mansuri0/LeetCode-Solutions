// LeetCode Problem 1664: Ways to Make a Fair Array
// Difficulty: Medium
// Topics: Array, Prefix Sum
// Approach: Prefix sums with running left/right sums
// Time Complexity: O(n)
// Auxiliary Space Complexity: O(1)
//
// Original approach provided by Aadil Mansuri.

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
