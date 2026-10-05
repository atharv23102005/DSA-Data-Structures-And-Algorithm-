class Solution { 
public: 
    bool predictTheWinner(vector<int>& nums) { 
        if(nums.size() % 2 == 0) return true; 
        
        int total = accumulate(nums.begin(), nums.end(), 0); 
        
        int p1 = func(0, nums.size()-1, nums); 
        int p2 = total - p1; 
        
        return p1 >= p2; 
    } 
    
    int func(int L, int R, vector<int>& nums) { 
        
        if(L > R) return 0; 
        
        if(L == R) return nums[L]; 
 
        int sl = nums[L] + min(func(L+1, R-1, nums), 
                               func(L+2, R, nums)); 
        
        int sr = nums[R] + min(func(L+1, R-1, nums), 
                               func(L, R-2, nums)); 
        
        return max(sl, sr); 
    }     
};