class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int index1=0;
        int size = nums.size();
        int index2 = size-1;
        while(index1<size && index2>-1){
            int a = nums[index1]+nums[index2];
            if(a==target){
                ans.push_back(index1+1);
                ans.push_back(index2+1);
                break;
            }
            else if(a>target){
                index2--;
            }
            else if(a<target){
                index1++;
            }
        }
        return ans;
    }
};