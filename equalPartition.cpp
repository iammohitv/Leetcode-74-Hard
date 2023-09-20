class Solution{
public:
    bool solve(int arr[], int sum, int n,vector<vector<int>>&t){
        if(sum==0){
            t[n][sum]=1;
            return t[n][sum];
        }
        if(n<=0){
            t[n][sum]=0;
            return t[n][sum]; 
        }
        if(t[n][sum]!=-1){
            return t[n][sum];
        }
        if(sum<arr[n-1]){
            t[n][sum] = solve(arr,sum,n-1,t);
            return t[n][sum];
        }else if(sum>=arr[n-1]){
            t[n][sum] = solve(arr,sum,n-1,t)||solve(arr,sum-arr[n-1],n-1,t);
            return t[n][sum];
        }
        
    };
    int equalPartition(int N, int arr[])
    {
        int sum =0;
        for(int i=0;i<N;i++){
            sum += arr[i];
        }
        if(sum%2!=0){
            return 0;
        }
        sum=sum/2;
        vector<vector<int>>t(N+1,vector<int>(sum+1,-1));
        return solve(arr,sum,N,t);
    }
};