class Solution {
public:
    bool canJump(vector<int>& nums) {

        int max_reach =nums[0];
        int n_s = nums.size();
        if(n_s==1){
            return true;
        }
        if(nums[0]==0){
            return false;
        }
        if(max_reach>=n_s-1){
                    return true;
        }
        for(int i=1;i<n_s-1;i++){
            
            if(i<=max_reach){
                if(nums[i]+i>max_reach){
                    max_reach = nums[i] + i;
                }
                if(max_reach>=n_s-1){
                    return true;
                }
            }
            else{
                return false;
            }
        }
        return false;
        
    }
};