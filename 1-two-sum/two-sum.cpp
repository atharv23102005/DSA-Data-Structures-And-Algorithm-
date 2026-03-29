class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index
        
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // check if complement exists
            if(mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            
            // store current element
            mp[nums[i]] = i;
        }
        
        return {}; // in case no solution (though problem guarantees one)
    }
};