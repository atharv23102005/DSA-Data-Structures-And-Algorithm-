class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();

        for (int i = 0; i < n; i++) {
            int leftSum = 0, rightSum = 0;

            // left sum
            for (int j = i - 1; j >= 0; j--) {
                leftSum += nums[j];
            }

            // right sum
            for (int j = i + 1; j < n; j++) {
                rightSum += nums[j];
            }

            // check if pivot
            if (leftSum == rightSum) {
                return i;
            }
        }

        return -1; // no pivot index found
    }
};
