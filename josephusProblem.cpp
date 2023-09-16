//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int solve(vector<int> &ans,int k,int index){
        if(ans.size()==1){
            return ans[0];
        }
        int size = ans.size();
        index = (index+k)%size;
        ans.erase(ans.begin()+index);
        solve(ans,k,index);
    }
    int safePos(int n, int k) {
        k= k-1;
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(i+1);
        }
        
        int ans1 = solve(ans,k,0);
        return ans1;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}
// } Driver Code Ends