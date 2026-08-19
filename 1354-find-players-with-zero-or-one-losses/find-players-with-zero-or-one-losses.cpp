class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int , int> lost_map;

        for(int i =0 ; i < matches.size();i++){
            int looser= matches[i][1];
            lost_map[looser]++;
            }
            vector<int> notlost;
            vector<int> lostOnce;
            
        for(int i = 0 ; i < matches.size(); i++){

            int winner = matches[i][0];
            int looser = matches[i][1];

        if(lost_map.find(winner) == lost_map.end()){
            notlost.push_back(winner);
            lost_map[winner]=2;
        }
        if( lost_map[looser] == 1 ){
            lostOnce.push_back(looser);
        
        }
    }
      
        sort(notlost.begin(), notlost.end());
        sort(lostOnce.begin(), lostOnce.end());
       return {notlost,lostOnce} ;
        
                
    }
};