class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();          // number of rows
        int n = matrix[0].size();

        // treating this as 1d array 
        int low=0, high= m *n-1;
        while(low<=high ){
            int mid=(low+high)/2;
            int row =mid/n , col=mid % n;
            if(matrix[row][col]== target ) return true ;
            else if (matrix[row][col]< target ) low=mid+1;
            else high =mid-1;

        }
        return false ;
    }
};