class Solution {
    vector<string>ans;
public:
void fun(string s , int n , int a , int b ){
    if(a > b ) return;
    if(a > (n/2 ) || b>(n/2)) return ;
    if(s.size()==n){
    ans.push_back(s);
    return;
    }
    fun(s+")", n, a+1, b);
    fun(s+"(", n, a, b+1);
}
    vector<string> generateParenthesis(int n) {

        ans.clear();
        fun("",2*n,0,0);
        return ans ;
    }
};