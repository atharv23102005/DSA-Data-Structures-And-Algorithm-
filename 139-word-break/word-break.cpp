map<string,int>dp;

int fun(int i,string &s,map<string,int>&m1, string tmp){
    if(i>=s.size()){
        return tmp.size()==0;
    }

    string key=to_string(i)+tmp;

    if(dp.find(key)!=dp.end()) return dp[key];

    int m=0;

    tmp+=s[i];

    if(m1.find(tmp)!=m1.end()){
        int a=fun(i+1,s,m1,"");
        m=m|a;
    }

    int a=fun(i+1,s,m1,tmp);
    m=m|a;

    return dp[key]=m;


}

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        map<string,int>m1;

        for(auto a:wordDict){
            m1[a]++;
        }
        
        dp.clear();
        return fun(0,s,m1,"");
    }
};