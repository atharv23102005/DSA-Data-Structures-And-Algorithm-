class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return helper(piles , 0 , piles.size()-1, 0,0);
        
    }
    private : 
     bool helper(vector<int>& piles , int left , int right , int alscore, int bscore ){
        if( left > right ){
            return alscore > bscore ;
        }
        return helper ( piles, left+1, right -1 , alscore + piles[left] , bscore + piles[right] ) ||  helper(piles, left+1, right -1 , alscore + piles[right] , bscore + piles[left]);

    }
};