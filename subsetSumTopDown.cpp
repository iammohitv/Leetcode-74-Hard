bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        
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
        
        return t[n][sum];
        // return solve(arr,sum,n,t);
    }