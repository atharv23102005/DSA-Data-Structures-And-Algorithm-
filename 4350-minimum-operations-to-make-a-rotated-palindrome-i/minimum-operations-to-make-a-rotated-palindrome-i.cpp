int fun( string s ){
     int cost = 0 ;
     int c1=0,c2=0 ; 
     int i =0 , j=s.size()-1  ;
     while (i < j ){
        if(s[i] != s[j]){

            int a1= s[i] - 'a';
            int a2= s[j] - 'a';
            c1= abs(a1-a2);
            c2= 26 - abs(a1-a2);
            cost += min(c1,c2);
        }
        i++;
        j--;
     }
     return cost ; 
}




class Solution {
public:
    int minOperations(string s) {
        int x = 1e9;
        int cost = 0;

    
        for (int i = 0 ; i <s.size() ;i++){
            int cost = 0 ;
            cost += fun(s)+i;
            x=  min(cost, x);
            
            s+=s[0];
            s.erase(s.begin());

        }
        return x ;
           
    }

    
};