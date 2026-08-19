class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {

        unordered_map<int, int> lost_map;

        // Count losses
        for (int i = 0; i < matches.size(); i++) {
            int loser = matches[i][1];
            lost_map[loser]++;
        }

        vector<int> notlost;
        vector<int> lostOnce;

        // Find players with 0 or 1 loss
        for (int i = 0; i < matches.size(); i++) {

            int winner = matches[i][0];
            int loser = matches[i][1];

            // Winner has never lost
            if (lost_map.find(winner) == lost_map.end()) {
                notlost.push_back(winner);
                lost_map[winner] = 2;
            }

            // Player has exactly one loss
            if (lost_map[loser] == 1) {
                lostOnce.push_back(loser);
            }
        }

        sort(notlost.begin(), notlost.end());
        sort(lostOnce.begin(), lostOnce.end());

        return {notlost, lostOnce};
    }
};