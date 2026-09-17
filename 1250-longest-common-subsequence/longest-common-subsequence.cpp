class Solution {
public:
int dp[1001][1001];

int fun(int i , int j , string &text1 , string &text2 ){
   if( i >= text1.size() || j >= text2.size() ) return 0 ;
    if (dp[i][j] != -1)  return dp[i][j];
    int m = 0 ;

   if(text1[i]==text2[j]){
        int a=1+fun(i+1,j+1,text1,text2);
        m=max(m,a);
    }else{
        int a=fun(i+1,j,text1 ,text2);
        int b=fun(i,j+1,text1 ,text2 );

        m=max(m,a);
        m=max(m,b);
    }

    return dp[i][j] =m;
}
    int longestCommonSubsequence(string text1, string text2) {
        memset( dp, -1 , sizeof(dp));
        return fun(0 , 0 , text1 , text2 );
        
        
    }
};