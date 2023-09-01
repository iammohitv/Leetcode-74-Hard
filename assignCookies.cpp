class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int g_s = g.size();
        int s_s = s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
        int i=0;
        int j=0;
        while(i<g_s&&j<s_s){
            if(g[i]<=s[j]){
                count++;
                i++;
                j++;
            }else{
                j++;
            }
        }

        return count;
    }
};