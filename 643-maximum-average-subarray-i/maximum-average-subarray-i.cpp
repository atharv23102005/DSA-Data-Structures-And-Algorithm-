class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int n = arr.size();

        int sum = 0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int maxsum = sum;

        for(int j = k;j<n;j++){
            int pre = arr[j-k];
            int next = arr[j];
            sum = sum-pre+next;
            maxsum = max(maxsum,sum);
        }

        double avg = (double)maxsum/k;
        return avg;
        
    }
};