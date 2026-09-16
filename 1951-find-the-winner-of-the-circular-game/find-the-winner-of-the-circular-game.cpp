class Solution {
public:
    int findTheWinner(int n, int k) { 
        vector<int> nums;
        
        for(int i = 1 ; i <= n ; i++){
            nums.push_back(i);
        }

        int i = 0 ;

        while(nums.size() > 1){
            int idx = (i + k - 1) % nums.size();

            nums.erase(nums.begin() + idx);

            i = idx % nums.size();
        }

        return nums[0]; 
    }
};