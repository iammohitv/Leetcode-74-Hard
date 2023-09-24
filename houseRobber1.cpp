class Solution {
public:
    int solve(vector<int>&nums,int n,vector<int>&mv){
        if(n<0){
            return 0;
        }
        if(mv[n]>=0){
            return mv[n];
        }
        mv[n] = max(nums[n] + solve(nums,n-2,mv),solve(nums,n-1,mv));
        return mv[n];
    };
    int rob(vector<int>& nums) {
        vector<int> mv(nums.size(),-1);
        return solve(nums,nums.size()-1,mv);
    }
};