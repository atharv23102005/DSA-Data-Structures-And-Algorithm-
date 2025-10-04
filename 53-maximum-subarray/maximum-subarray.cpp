class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int maxSum = INT_MIN;
         int start = 0, ansStart = -1, ansEnd = -1;

         for(int i=0; i<n;i++){

            
        sum +=nums[i];

            if(sum > maxSum ){
                maxSum = sum;
                ansStart = start;
                ansEnd=i;
            }

            if (sum < 0) {
                sum=0;
                start=i+1;
            }
         }
           cout << "Maximum Subarray Sum = " << maxSum << endl;
        cout << "Start index = " << ansStart << ", End index = " << ansEnd << endl;

        return maxSum;
        
    }
};