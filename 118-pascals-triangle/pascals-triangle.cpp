class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        // Create each row from 1 to numRows
        for(int i = 0; i < numRows; i++) {

            // Every row has i+1 elements
            vector<int> row(i + 1);

            // First and last element of every row is 1
            row[0] = 1;
            row[i] = 1;

            // Fill inner values using previous row
            for(int j = 1; j < i; j++) {
                row[j] = ans[i-1][j-1] + ans[i-1][j];
            }

            ans.push_back(row);
        }

        return ans;
    }
};
