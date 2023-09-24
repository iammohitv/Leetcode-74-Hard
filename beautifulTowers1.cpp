class Solution {
public:
    long long maximumSumOfHeights(vector<int>& a) {
        
        long long int ans=0;
        int m_s = a.size();
        long long int sum=0;
        for(int i=0;i<m_s;i++){
            sum = a[i];
            int prev = a[i];
            for(int j=i+1;j<m_s;j++){
                prev=min(a[j],prev);
                sum+=prev;
            }
            prev =a[i];
            for(int j=i-1;j>=0;j--){
                prev = min(a[j],prev);
                sum+=prev;
            }
            if(sum>ans){
                ans=sum;
            }
        }
        return ans;
    }
};