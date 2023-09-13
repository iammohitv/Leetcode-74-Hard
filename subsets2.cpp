class Solution {
public:
    void solve(vector<int> nums,vector<int>mid_ans,vector<vector<int>> &result){
        if(nums.size()==0){
            result.push_back(mid_ans);
            return;
        }
        vector<int> op1;
        vector<int> op2;
        op1 = mid_ans;
        op2 = mid_ans;
        op2.push_back(nums[0]);
        nums.erase(nums.begin());
        solve(nums,op1,result);
        solve(nums,op2,result);
    };
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int> mid_ans;
        solve(nums,mid_ans,result);
        set<vector <int>>result2;
        vector<vector<int>>ans2;
        int prev_size = 0;
        for(auto i:result){
            result2.insert(i);
            if(result2.size()>prev_size){
                ans2.push_back(i);
                prev_size++;
            }
        }
        return ans2;
    }
};