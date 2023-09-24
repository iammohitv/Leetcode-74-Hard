class Solution {
public:
int binarySearch(vector<int>&nums,int size,int key){
    int low = 0;
    int high = size-1;
    
    while(low<=high){
        int mid = (low + high)/2;
        if(key == nums[mid]){
            return mid;
        }
        else if(nums[low] <= nums[mid]){
            if(nums[low]<=key && nums[mid]>=key){
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(nums[mid] <= key && nums[high] >= key){
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
    }  
    return -1;
}
    int search(vector<int>& nums, int target) {
        int ans = binarySearch(nums,nums.size(),target);
        return ans;
    }
};