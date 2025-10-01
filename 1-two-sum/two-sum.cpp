class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
       for(int i=0; i<n ; i++){
            for(int j=n-1;j>=0;j--){
                if(i != j && nums[i]+nums[j]==target){
                    return {i, j};
                     
                }

            }
        }
       return {};
    } 
};