class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        
        stack<int> mv;
        stack<int> index;
        int n1 = nums.size();
        vector<int> main_ans(n1,0);
        for(int i=n1-1;i>-1;i--){
            if(mv.empty()){
                main_ans[i] = 0;
                mv.push(nums[i]);
                index.push(i);
            }
            else{
                while(mv.top()<=nums[i]){
                    mv.pop();
                    index.pop();
                    if(mv.empty()){
                        break;
                    }
                }
                if(mv.empty()){
                    main_ans[i] = 0;
                    mv.push(nums[i]);
                    index.push(i);
                }
                else{
                    main_ans[i] = index.top()-i;
                    mv.push(nums[i]);
                    index.push(i);
                }
            }
        }
        return main_ans;
    }
};