void fun(vector<int>&nums,vector<int>&tmp,vector<vector<int>>&ans){
    
    

    if(nums.size()==0){
        ans.push_back(tmp);
        return ;
    }

    for(int i=0;i<nums.size();i++){
        vector<int>ip(nums),op(tmp);

        // ip={1,2,4} op={}
        op.push_back(nums[i]);
        
        
        ip.erase(ip.begin()+i);


        fun(ip,op,ans);
    }
}


class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>tmp;
        vector<vector<int>>ans;
        fun(nums,tmp,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};