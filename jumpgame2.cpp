class Solution {
public:
    int jump(vector<int>& nums) {
        int current_reach=0;
        int max_reach =0;
        int jumps =0;
        int n_s = nums.size();
        for(int i=0;i<n_s-1;i++){
            if(nums[i]+i>max_reach){
                max_reach = nums[i]+i;
            }
            if(i==current_reach){
                jumps++;
                current_reach = max_reach;
            }
        }
        return jumps;
    }
};