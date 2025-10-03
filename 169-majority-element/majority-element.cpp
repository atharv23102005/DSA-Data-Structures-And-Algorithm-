class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        // i have to iterate i till n as it works for outer loop
        for(int i=0; i<n; i++){
            // taken count=0 to start from zero 
            int count=0;
            // j will work for inner loop tell hom=w many times it will occur
            for(int j=0; j<n; j++){
                if (nums[i]==nums[j]){
                    count++;
                }
            }
            if(count > n/2){
                return nums[i];
            }

            
        }
        //   if(count > n/2){
        //         return nums[i];
        //     }
    return -1;
    }
    };
