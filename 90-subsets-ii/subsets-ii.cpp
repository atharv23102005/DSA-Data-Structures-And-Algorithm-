class Solution {
public:

    void solve(int index, vector<int>& nums,
               vector<int>& ds,
               vector<vector<int>>& ans,
               map<vector<int>, int>& mp) {

        if (index == nums.size()) {

            if (mp[ds] == 0) {
                ans.push_back(ds);
                mp[ds] = 1;
            }

            return;
        }

        // ekemnt taken 
        ds.push_back(nums[index]);

        solve(index + 1, nums, ds, ans, mp);

        ds.pop_back();

        // not taken +
        solve(index + 1, nums, ds, ans, mp);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> ds;

        map<vector<int>, int> mp;

        solve(0, nums, ds, ans, mp);

        return ans;
    }
};