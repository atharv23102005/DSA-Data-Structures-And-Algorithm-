int dp[300][5002];
int fun(int i , vector<int>&nums, int s , int k ){
    if(s==k) return 1 ;
    if(s>k || i>=nums.size()) return 0;
    if(dp[i][s] !=-1) return dp[i][s];
    int a=fun(i,nums,s+nums[i],k);
    int b=fun(i+1,nums,s,k);

    return dp[i][s]=a+b;

}

class Solution {
public:
    int change(int k, vector<int>& nums) {
        
        memset(dp, -1 ,sizeof(dp));
        return fun(0,nums,0,k);
        
    }
};