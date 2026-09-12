bool check(int l,int r,string &s){
    if(s[l]=='0') return 0;
    
    string tmp;

    for(int i=l;i<=r;i++){
      tmp+=s[i];
    }

    

    reverse(tmp.begin(),tmp.end());
    
    int i=0,num=0;

    for(auto a:tmp){
        if(a=='0'){
            i++;
            continue;
        }
        num=num+pow(2,i);
        i++;
    }

    for(int i=0;i<=10;i++){
        int kk=pow(5,i);
        if(num==kk) return 1;
    }

    return 0;
}


int fun(int p,int i,string &s){
    if(i==s.size()-1){
        if(check(p,i,s)==1) return 0;
        return 1e9;
    }


    int m=1e9;

    if(check(p,i,s)==1){
        int a=1+fun(i+1,i+1,s);
        m=min(m,a);
    }

    int a=fun(p,i+1,s);
    m=min(m,a);

    return m;

}


class Solution {
public:
    int minimumBeautifulSubstrings(string s) {
        int ans=fun(0,0,s);
        return ans==1e9 ? -1 : ans+1;
    }
};