//Boyer Moore's Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n_s = nums.size();
        int element = nums[0];
        int count =1;
        for(int i=1;i<n_s;i++){
            if(count!=0){
                if(nums[i]==element){
                    count++;
                }
                else{
                    count--;
                }
                
            }
            else{
                element = nums[i];
                count=1;
            }
        }
        return element;
    }
};