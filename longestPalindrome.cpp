class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mv;
        for(int i=0;i<s.size();i++){
            mv[s[i]]++;
        }
        int max_odd=0;
        int count=0;
        for(auto it:mv){
            count+=it.second - it.second%2;
            if(it.second%2){
                max_odd=1;
            }
        }
        return count + max_odd;
    }
};