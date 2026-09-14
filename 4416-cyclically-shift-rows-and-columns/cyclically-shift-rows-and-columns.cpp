class Solution {
public:
   vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
       vector<vector<int>> rowShiftedGrid = grid ;

       for(int i = 0 ; i < n ; i++){
           int shiftAmount = rowShift[i];

           for(int s = 0 ; s< shiftAmount ; s++){
               int firstElement = rowShiftedGrid[i][0];
               for(int j = 0 ; j < n-1 ; j++){
                   rowShiftedGrid[i][j] = rowShiftedGrid[i][j + 1];
               }

               rowShiftedGrid[i][n-1]= firstElement;
           }
       }

       vector<vector<int>> finalGrid = rowShiftedGrid;
       for(int j = 0 ; j < n ; j++){
           int shiftAmount = colShift[j];


           for(int s = 0 ; s < shiftAmount ; s++){
               int topElement = finalGrid[0][j];
               for(int i = 0 ; i < n-1 ; i++){
                   finalGrid[i][j] = finalGrid[i+1][j];
               }
               finalGrid[n-1][j] = topElement ;
           }
       }
        return finalGrid;
    }
};