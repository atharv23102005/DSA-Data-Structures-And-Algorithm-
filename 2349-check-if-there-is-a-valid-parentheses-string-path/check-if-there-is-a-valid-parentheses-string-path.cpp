class Solution {
public:
    int dp[101][101][205];
    bool fun(int i, int j, vector<vector<char>>& grid, int balance) {
        if(i >= grid.size() || j >= grid[0].size())
            return false;

    
        if(grid[i][j] == '(')
            balance++;
        else
            balance--;

        if(balance < 0)
            return false;

           if(dp[i][j][balance] != -1)
            return dp[i][j][balance];
        if(i == grid.size()-1 && j == grid[0].size()-1) {
            return balance == 0;
        }
        bool right = fun(i, j+1, grid, balance) ;
          bool down = fun(i+1, j, grid, balance);

     return dp[i][j][balance] = right || down;
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        memset(dp , -1 , sizeof(dp));
        return fun(0, 0, grid, 0);
    }
};