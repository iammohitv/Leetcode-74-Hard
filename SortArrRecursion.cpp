class Solution {
    public:
    void sortArr(vector<int >&nums){
        if(nums.size()==1){
            return;
        }
        int last_elem = nums[nums.size()-1];
        nums.pop_back();
        sortArr(nums);
        insert(last_elem,nums);
    };
    void insert(int n, vector<int>&nums){
        if(nums.size()==0||nums[nums.size()-1]<=n){
            nums.push_back(n);
            return;
        }
        int last_elem = nums[nums.size()-1];
        nums.pop_back();
        insert(n,nums);
        nums.push_back(last_elem);
    };
    vector<int> sortArray(vector<int>& nums) {
        sortArr(nums);
        return nums;
    }
};