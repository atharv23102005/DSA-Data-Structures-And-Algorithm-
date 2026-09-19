class Solution {
public:
int dp[501][503][29];
int fun(int i ,vector<int>& nums, int p , int k ){
     if(i>=nums.size()) return 0;

       if(dp[i][p+1][k]!=-1) return dp[i][p+1][k];

    int m = 0 ;
     if(p==-1 || nums[i]==nums[p]){
        int g=1+fun(i+1,nums,i,k);
        m=max(m,g);
     }
         else if (k>0){
        int b=1+fun(i+1,nums,i,k-1);
        m=max(m,b);
    }
    int b=fun(i+1,nums,p,k);

    m=max(m,b);


     return dp[i][p+1][k]=m;


}



    int maximumLength(vector<int>& nums, int k) {
    
    memset(dp , -1, sizeof(dp));
        
        return fun(0 , nums, -1 , k );

    }
};