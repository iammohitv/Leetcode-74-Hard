class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        
        sort(nums.begin(),nums.end());
        if(nums[0]>0){
            return {};
        }
        if(nums.size()<3){
            return{};
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                break;
            }
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int left = i+1;
            int right = nums.size()-1;
            
            while(left<right){
                int sum = nums[i] + nums[left] + nums[right];
                
                if(sum>0){
                    right--;
                }
                else if(sum<0){
                    left++;
                }
                else{
                    ans.push_back({nums[i],nums[left],nums[right]});
                    int left_occ = nums[left];
                    int right_occ = nums[right];
                    while(left<right && nums[left]==left_occ){
                        left++;
                    }
                    while(right>left && nums[right]==right_occ){
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};