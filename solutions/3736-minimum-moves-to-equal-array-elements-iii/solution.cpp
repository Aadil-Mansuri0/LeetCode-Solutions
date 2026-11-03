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