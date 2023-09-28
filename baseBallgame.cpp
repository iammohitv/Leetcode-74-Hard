#include<bits/stdc++.h>
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int o_size = operations.size();

        for(int i=0;i<o_size;i++){
            int x = operations[i][0]-48;
            if(x==19){
                ans.pop_back();
            }
            else if(x==20){
                int mv = ans.size();
                int a = ans[mv-1];
                ans.push_back(a*2);
            }
            else if(x==-5){
                int mv = ans.size();
                ans.push_back(ans[mv-1]+ans[mv-2]);
            }
            else{
                int x = stoi(operations[i]);
                ans.push_back(x);
            }
        }
        int sum = 0;
        for(int j=0;j<ans.size();j++){
            sum+=ans[j];
        }
        return sum;
    }
};