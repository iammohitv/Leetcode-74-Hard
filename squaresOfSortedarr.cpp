class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int breakpoint =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                breakpoint=i;
                break;
            }
        }
        // cout<<breakpoint<<endl;
        vector<int> ans;
        int left = breakpoint-1;
        int right = breakpoint;
        while(left>=0 || right<=nums.size()-1){
            // cout<<left<<" "<<right<<endl;
            if(left<0){
                ans.push_back(nums[right]*nums[right]);
                right++;
            }
            else if(right>nums.size()-1){
                ans.push_back(nums[left]*nums[left]);
                left--;
            }
            else if(-1*nums[left]>nums[right]){
                ans.push_back(nums[right]*nums[right]);
                right++;
            }
            else{
                ans.push_back(nums[left]*nums[left]);
                left--;
            }
        }
        return ans;
    }
};