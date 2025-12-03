class Solution {
public:

int findays(vector<int>& weights, int capacity ){
    int n=weights.size();
    int days=1 , load = 0;
    for (int i=0 ; i <= n-1 ; i++){
        if (load + weights[i] > capacity){
            days += 1;
            load = weights[i];

        }else {
           load += weights[i];
        }
       
    }

 return days ;

}
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
         int high = accumulate(weights.begin(), weights.end(),0);

         while (low <= high){
            int mid = (low+high)/2    ;
            int numDays = findays(weights , mid); 
            if (numDays <= days  ){
                high = mid-1;
            }
            else  {
                low = mid + 1;
            }
            
            
            
                }

        return low ;
    }
};