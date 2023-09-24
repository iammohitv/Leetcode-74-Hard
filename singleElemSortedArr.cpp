class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left =0;
        int right = nums.size()-1;
        int mid =0;
        while(left<right){
            mid = (left + right)/2;
            int x=0;
            if(mid%2==0){
                x = mid+1;
            }
            else{
                x = mid -1;
            }
            
            if(nums[mid]==nums[x]){
                left = mid+1;
            }
            else{
                right = mid;
            }
            
        }
        return nums[right];
        
    }
};