class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length();
        int count = 0 ;
        for(int i = 0 ; i < k ; i++){
            if( blocks[i] == 'W') {
                count++;
            }
           
        }
         int minCount = count ;
        for(int j = k ; j < n ; j++){
            char prev = blocks[j - k ];
            char next = blocks[j];

            if(prev == 'W'){
            count--;
            }
            
            if(next == 'W'){
                count++;
               
            }
             minCount = min(count , minCount);
        }
        return minCount ;


        
    }
};