class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();

        // Check if reshape is possible
        if (rows * cols != r * c)
            return mat;

        vector<vector<int>> result(r, vector<int>(c));
        int idx = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[idx / c][idx % c] = mat[i][j];
                idx++;
            }
        }
        return result;
    }
};
