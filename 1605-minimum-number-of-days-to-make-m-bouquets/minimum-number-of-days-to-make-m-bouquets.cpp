class Solution {
public:
      int possible(vector<int>& arr, int days, int m, int k)  
      {
        int n=arr.size();
          int count =0 , nofbouq=0;
           for(int i=0 ; i < n ; i++){
            if (arr[i]<= days){
                count ++; 
            } else {
                      nofbouq += (count)/k;
                      count=0;
            }
               
                }
          nofbouq += count / k;

        return nofbouq >= m; 
      }
      
 int minDays(vector<int>& arr, int m, int k) {
        int n=arr.size();
       int low = *min_element(arr.begin(), arr.end());
       int high = *max_element(arr.begin(), arr.end());
       int ans = high;
        if ((long long)m * k > n) return -1;

        while(low <= high){
            int mid = (low + high)/2;
            if ( possible(arr ,mid ,  m ,k) == true){
                ans =mid ;
                high=mid -1;
            }else {
                low= mid +1;
            }
        }
        return low ;








 

    }
};