class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int l=1 , h=n-1, ans=-1;
        while(l<=h){
            int mid =(l+h)/2;
            int count = 0;
            for(int i =0 ; i<n;i++){
                if(nums[i]<= mid ){
                    count++;
                }
            }
                if(count > mid  ){
                    ans = mid;
                    h =mid-1;
                }else {
                    l=mid +1;
                }
            }
             

        
        return ans ;
    }
};