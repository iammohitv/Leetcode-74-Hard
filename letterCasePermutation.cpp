class Solution {
public:
    void solve(string input,string output, vector<string> &ans){

        if(input.size()==0){
            ans.push_back(output);
            return;
        }

        if(isdigit(input[0])){
            string op = output + input[0];
            input = input.substr(1);
            solve(input,op,ans);
        }else{
            char ch1 = tolower(input[0]);
            char ch2 = toupper(input[0]);
            input = input.substr(1);
            solve(input,output + ch1,ans);
            solve(input,output + ch2,ans);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(s,"",ans);
        return ans;
    }
};