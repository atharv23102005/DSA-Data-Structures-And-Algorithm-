class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> s;

        for (int i = 0; i < nums.size(); i++) {

            // if element already exists in set → nearby duplicate found
            if (s.count(nums[i])) 
                return true;

            // insert current element
            s.insert(nums[i]);

            // maintain window of size k
            if (s.size() > k) {
                s.erase(nums[i - k]);
            }
        }
        return false;
    }
};
