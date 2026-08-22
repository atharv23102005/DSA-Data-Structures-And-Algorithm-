bool fun(int i  , int j , string &s, string &t){
    if(i>= s.size())  
    return 1;
    if(j>= t.size()) 
    return 0 ;
     
     bool m = 0 ;

   if(s[i]==t[j]){
        bool a1=fun(i+1,j+1,s,t);
        m=m|a1;
   }
    else {

        bool a2=fun(i,j+1,s,t);
        m=m|a2;
    }
    return m;
   
    

}


class Solution {
public:
    bool isSubsequence(string s, string t) {
        return fun(0,0,s,t);

        
    }
};