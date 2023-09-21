//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  {
	    int sum =0;
	    for(int i=0;i<n;i++){
	        sum +=arr[i];
	    }
	    vector<vector<int>>t(n+1,vector<int>(sum+1,-1));
        
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
                if(arr[i-1]>j){
                    t[i][j] = t[i-1][j];
                }
                else if(arr[i-1]<=j){
                    t[i][j]= t[i-1][j-arr[i-1]] || t[i-1][j];
                }
            }
        }
        
	    for(int i=sum/2;i>=0;i++){
	        for(int j=n;j>=0;j--){
	            if(t[j][i]){
	                return abs((sum - i)-i);
	            }
	        }
	    }
	    return sum;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends