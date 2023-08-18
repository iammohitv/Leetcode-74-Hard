class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=0;

        unordered_set <char> mv;
        int n = s.size();
        while(i<n && j<n){
            if(mv.find(s[j])==mv.end()){
                mv.insert(s[j]);
                j++;
                ans = max(ans,j-i);
            }
            else{
                mv.erase(s[i]);
                i++;
            }
        }
        
        return ans;
    }
};