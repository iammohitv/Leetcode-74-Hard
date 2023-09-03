class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int, int> mv;

        int h_s=hand.size();
        for(int i=0;i<h_s;i++){
            mv[hand[i]]++;
        }
        sort(hand.begin(),hand.end());
        for(int i=0;i<h_s;i++){
            if(mv[hand[i]]==0){
                continue;
            }
            for(int j=0;j<groupSize;j++){
                int current = hand[i]+j;
                if(mv[current]==0){
                    return false;
                }
                mv[current]--;
            }
        }
        return true;
    }
};