class Solution {
    private : vector<vector<int>>dp;
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n , vector<int>(n , -1));
        if(! (n & 1)) return true ;
        return diff(0 , n-1 , nums ) >= 0 ;
        
    }
    int diff( int l , int r , vector<int> &nums){
        if(dp[l][r] != -1 )
         return dp[l][r];
        if(l == r ){
            dp[l][r] = nums[l];
            return nums[l];
        }
        dp[l][r] = max(nums[l]- diff(l+1 , r , nums) , nums[r] - diff(l , r-1, nums));
         return dp[l][r];
    }
    
};