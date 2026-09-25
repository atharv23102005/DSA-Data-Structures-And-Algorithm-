class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int count = 0 ;
        for(int i = 0 ; i < k ; i++){
            char ch  = s[i];
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                count++ ;
            }
        }
        int maxCount = count ;
        for(int j = k ; j < n ; j++){
            char prev = s[j-k];
            char next = s[j];

            if(next == 'a' || next == 'e' || next == 'i' || next == 'o' || next == 'u'){
                count++ ; 
            }
            if(prev == 'a' || prev == 'e' || prev == 'i' || prev == 'o' || prev == 'u' ){
                count-- ; 
            }
            maxCount = max(count , maxCount );
        }
        return maxCount ;
    }
};