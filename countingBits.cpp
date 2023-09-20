class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> mv(n+1);

        for(int i=0;i<=n;i++){
            if(i==0){
                mv[i]=0;
            }
            else if(i%2){
                mv[i] = mv[i-1] + 1;
            }
            else{
                mv[i] = mv[i/2];
            }
        }
        return mv;
    }
};