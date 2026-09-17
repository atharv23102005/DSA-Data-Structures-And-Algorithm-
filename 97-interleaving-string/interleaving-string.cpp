int dp[1001][1001];


int fun(int i,int j,int k,string &s,string &t,string &str){



    if(k>=str.size()){
       return i>=s.size() && j>=t.size();
    }

    if(i>=s.size()){
        while(j<t.size() && k<str.size()){
            if(t[j]==str[k]){
                j++;
                k++;
            }else{
                return 0;
            }
        }
        return j>=t.size() && k>=str.size();
    }

    if(j>=t.size()){
        while(i<s.size() && k<str.size()){
            if(s[i]==str[k]){
                i++;
                k++;
            }else{
                return 0;
            }
        }
        return i>=s.size() && k>=str.size();
    }


    if(dp[i][j]!=-1) return dp[i][j];
    

    int m=0;

    if(s[i]==str[k]){
        int a=fun(i+1,j,k+1,s,t,str);
        m=m|a;
    }

    if(t[j]==str[k]){
        int a=fun(i,j+1,k+1,s,t,str);
        m=m|a;
    }

    return dp[i][j]=m;
}


class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        memset(dp,-1,sizeof(dp));
        return fun(0,0,0,s1,s2,s3);
    }
};