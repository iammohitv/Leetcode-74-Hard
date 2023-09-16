class Solution{
public:	
    void solve(int one,int zero,int n,string main_ans,vector<string>&ans){
      if(one + zero == n){
          ans.push_back(main_ans);
          return;
      }
      
      if(one==zero){
          solve(one + 1, zero,n, main_ans+'1',ans);
      }
      else{
          solve(one + 1, zero,n, main_ans+'1',ans);
          solve(one, zero+1,n, main_ans+'0',ans);
      }
    };
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    string main_ans = "";
	    vector<string> ans;
	    solve(0,0,N,main_ans,ans);
	    return ans;
	}
};