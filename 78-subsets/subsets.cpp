class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans ;
        vector<int> op;
        fun(  0,  nums, op  , ans );
        return ans ;
        
    }
    void fun(int i , vector<int>nums, vector<int>&op,vector<vector<int>> &ans ){
        if(i >= nums.size()){
            ans.push_back(op);
            return;
        }
        op.push_back(nums[i]);
        fun(i +1 , nums, op, ans);

        op.pop_back();
        fun(i+1 ,nums , op , ans );
    }

};