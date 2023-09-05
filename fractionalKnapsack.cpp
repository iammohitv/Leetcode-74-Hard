class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int g_sum=0;
        int c_sum=0;
        for(int i=0;i<gas.size();i++){
            g_sum+=gas[i];
        }
        for(int i=0;i<cost.size();i++){
            c_sum+=cost[i];
        }

        if(g_sum<c_sum){
            return -1;
        }
        int ans=0;
        int x=0;
        for(int i=0;i<gas.size();i++){
            x+=gas[i]-cost[i];
            if(x<0){
                x=0;
                ans = i+1;
            }
        }
        return ans;
    }
};