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