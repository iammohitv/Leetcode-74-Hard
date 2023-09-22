//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int n, int sum) {

        
        vector<vector<long long int>>t(n+1,vector<long long int>(sum+1,-1));
        
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum + 1;j++){
                if(j==0){
                    t[i][j]=1;
                    continue;
                }
                if(i==0){
                    t[i][j]=0;
                }
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum + 1;j++){
                if(coins[i-1]>j){
                    t[i][j] = t[i-1][j];
                }
                else if(coins[i-1]<=j){
                    t[i][j]= t[i][j-coins[i-1]] + t[i-1][j];
                }
            }
        }
        
        return t[n][sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends