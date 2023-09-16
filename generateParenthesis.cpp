class Solution {
public:
    void solve(int open,int close,string main_ans, vector<string> &ans){
        if(close==0&&open==0){
            ans.push_back(main_ans);
            return;
        }
        if(open!=0){
            solve(open-1,close,main_ans + '(',ans);
        }
        if(close>open){
            solve(open,close-1,main_ans + ')',ans);
            return;
        }
    };
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string main_ans="";
        solve(n,n,main_ans,ans);
        return ans;
    }
};