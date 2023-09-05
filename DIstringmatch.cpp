class Solution {
public:
    vector<int> diStringMatch(string s) {

        int s_s=s.size();
        vector<int> mv;
        int min=0;
        int max=s_s;
        for(int i=0;i<s_s;i++){
            if(s[i]=='I'){
                mv.push_back(min);
                min++;
            }
            else{
                mv.push_back(max);
                max--;
            }
        }
        mv.push_back(min);
        return mv;
    }
};