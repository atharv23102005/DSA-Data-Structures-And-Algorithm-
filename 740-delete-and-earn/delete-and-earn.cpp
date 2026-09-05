int dp[20005];

int fun(int i,vector<int>&nums,map<int,int>&m1){
    if(i==nums.size()-1) return nums[i]*m1[nums[i]];
    if(i>=nums.size()) return 0;

    if(dp[i]!=-1) return dp[i];

    int m=0;

    if(i+1<nums.size() && nums[i+1]==nums[i]+1){
        int a=(nums[i]*m1[nums[i]])+fun(i+2,nums,m1);
        m=max(m,a);
    }
    if(i+1<nums.size() && nums[i+1]!=nums[i]+1){
        int a=(nums[i]*m1[nums[i]])+fun(i+1,nums,m1);
        m=max(m,a);
    }

    int a=fun(i+1,nums,m1);
    m=max(m,a);

    return dp[i]=m;
}


class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int,int>m1;
        for(auto a:nums) m1[a]++;
        vector<int>v1;

        for(auto a:m1){
            v1.push_back(a.first);
        }

        for(auto a:v1) cout<<a<<" ";

        memset(dp,-1,sizeof(dp));
        return fun(0,v1,m1);
    }
};