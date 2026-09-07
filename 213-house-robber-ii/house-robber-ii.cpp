class Solution {
public:
int solve(vector<int>& nums , int l , int r){

    int prev = 0 ;
    int prev2 = 0;
    for(int i = l ; i <= r ; i++){
        int take = nums[i] + prev2;
        int skip= prev ;

        int temp = max(take , skip );
        prev2= prev ;
        prev=temp ;

        
           }

 return prev;
}
 int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1 ) return nums[0];
        if(n==2) return max(nums[0], nums[1]);
        
        int take_first_house=solve(nums, 0 , n-2);
        int skip_first_house =solve(nums,1,n-1);
        return max(take_first_house,  skip_first_house);

 }
};