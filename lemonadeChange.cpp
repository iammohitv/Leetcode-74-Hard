class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b_s = bills.size();
        int f=0;
        int t=0;
        for(int i=0;i<b_s;i++){
            if(bills[i]==5){
                f++;
            }
            else if(bills[i]==10){
                f--;
                if(f<0){
                    return false;
                }
                t++;
            }
            else if(bills[i]==20){
                if(t>0){
                    t--;
                    f--;
                    if(t<0||f<0){
                        return false;
                    }
                }
                else{
                    f = f-3;
                    if(f<0){
                        return false;
                    }
                }
            } 
        }
        return true;
    }
};