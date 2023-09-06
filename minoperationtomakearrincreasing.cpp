class Solution {
public:
    int minOperations(vector<int>& nums) {

        int ans=0;
        int n_s = nums.size();
        for(int i=1;i<n_s;i++){
            if(nums[i]<=nums[i-1]){
                ans+= nums[i-1]-nums[i]+1;
                nums[i]+= nums[i-1]-nums[i]+1;
            }
        }
        return ans;
    }
};