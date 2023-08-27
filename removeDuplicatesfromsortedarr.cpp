class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique_elems=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[unique_elems-1]){
                nums[unique_elems]= nums[i];
                unique_elems++;
            }
        }
        return unique_elems;
    }
};