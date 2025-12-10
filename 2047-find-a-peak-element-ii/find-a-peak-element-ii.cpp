class Solution {
public:

    // find the row index of maximum element in a given column
    int findMax(vector<vector<int>>& mat, int n, int m, int col) {
        int maxValue = -1;
        int index = -1;

        for (int i = 0; i < n; i++) {
            if (mat[i][col] > maxValue) {
                maxValue = mat[i][col];
                index = i;      // FIXED: you wrote index = -1 (wrong)
            }
        }

        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();   // FIXED: mat[0].size()

        int low = 0, high = m - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            int maxRowIndex = findMax(mat, n, m, mid);  
            // FIXED: your parameter order was wrong

            int left = (mid - 1 >= 0) ? mat[maxRowIndex][mid - 1] : -1;
            int right = (mid + 1 < m) ? mat[maxRowIndex][mid + 1] : -1;

            // Check if mid column is a peak
            if (mat[maxRowIndex][mid] > left && mat[maxRowIndex][mid] > right) {
                return {maxRowIndex, mid};
            }

            // Move towards the bigger side
            if (left > mat[maxRowIndex][mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {-1, -1}; // Should never reach here for valid input
    }
};
