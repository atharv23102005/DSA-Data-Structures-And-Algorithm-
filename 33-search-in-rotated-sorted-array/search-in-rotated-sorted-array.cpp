class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k=nums.size();
        int low=0, high=k-1;
        while(low<=high ){
            int mid=(low+high)/2;
            if(nums[mid]== target){
                return mid;
             
            } 
            // if left part is sorted //
            if (nums[low]<=nums[mid]){
                if(target >= nums[low] && target < nums[mid ]  ){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
                 }

                 else{
                    if(target >nums[mid] && target <= nums[high] ){
                        low=mid+1;
                    }else{
                        high=mid-1;
                    }
                 }
            
            
          
        
    }
    return -1;
    }
};