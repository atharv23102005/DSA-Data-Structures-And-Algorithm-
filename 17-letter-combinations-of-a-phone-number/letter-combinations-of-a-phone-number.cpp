vector<string>ans;

void fun(int i,string &s,string tmp,map<int,string>&m1){
    if(i>=s.size()){
        ans.push_back(tmp);
        return ;
    }

    int curr=s[i]-'0';
    string str=m1[curr];

    for(int j=0;j<str.size();j++){
        tmp+=str[j];
        fun(i+1,s,tmp,m1);
        tmp.pop_back();
    }
}


class Solution {
public:
    vector<string> letterCombinations(string s) {
        map<int,string>m1;
        m1[2]="abc";
        m1[3]="def";
        m1[4]="ghi";
        m1[5]="jkl";
        m1[6]="mno";
        m1[7]="pqrs";
        m1[8]="tuv";
        m1[9]="wxyz";

        ans.clear();

        fun(0,s,"",m1);

        return ans;
    }
};