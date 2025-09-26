class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<=n;i++){
            bool found=false;
            for(int j=0;j<nums.size();j++){
                if( nums[j]==i){
                found = true;
                    break;
                }
            }
            if (!found) {
         return i;
            
        }
        
        }
    return -1;
    }
};