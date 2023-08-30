class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=nums[0];
        int prev_max = nums[0];
        int n_s = nums.size();
        for(int i=1;i<n_s;i++){
            if(prev_max+nums[i]<nums[i]){
                prev_max = nums[i];
            }
            else{
                prev_max += nums[i];
            }
            if(max_sum<prev_max){
                max_sum = prev_max;
            }
        }
        return max_sum;
    }
};