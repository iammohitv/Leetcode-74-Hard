class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return  0;
        }
        int longest = 1;
        unordered_set<int>mv;
        for(int i=0;i<n;i++){
            mv.insert(nums[i]);
        }
        for(auto it:mv){
            if(mv.find(it-1)==mv.end()){
                int count=1;
                int x = it;
                while(mv.find(x+1)!=mv.end()){
                    count++;
                    x++;
                }
                if(longest<count){
                    longest=count;
                }
            }
        }
        return longest;
    }
};