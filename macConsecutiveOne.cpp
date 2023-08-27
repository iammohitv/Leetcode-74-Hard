class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count =0;
            }
            else{
                count++;
                if(max<count){
                    max = count;
                }
            }
        }
        return max;
    }
};