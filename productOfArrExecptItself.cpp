class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr;
        int pr=1;
        for(int i=0;i<nums.size();i++){
            
            arr.push_back(pr);
            pr = pr*nums[i];
        }
        int pr2=1;
        vector<int> arr1;
        for(int i=nums.size()-1;i>=0;i--){
            arr1.push_back(pr2);
            pr2 = pr2*nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = arr[i]*arr1[nums.size()-i-1];
        }
        return nums;
    }
};