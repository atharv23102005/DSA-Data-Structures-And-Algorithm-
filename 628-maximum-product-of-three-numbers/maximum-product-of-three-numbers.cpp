class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int size=nums.size();
        sort(nums.begin(), nums.end());
        int case1= nums[size - 1]*nums[size - 2]*nums[size - 3];
         int case2= nums[0]*nums[1]*nums[size -1];

         return max(case1, case2);
        
    }
};