class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      
        if(nums.size() == 0 )
 return 0;
 sort(nums.begin(), nums.end())   ;
   int n= nums.size();
   int last_smaller = INT_MIN ;
   int cnt =0 ;
   int longest = 1;
   for(int i =0 ; i < n;i++) {
    if(nums[i] - 1 == last_smaller){
        cnt += 1;
        last_smaller = nums[i];

    }
    else if (last_smaller != nums[i]){
        cnt =1;
        last_smaller= nums[i];
    }
    longest= max(longest, cnt);
   }    
   return longest;
    }
};