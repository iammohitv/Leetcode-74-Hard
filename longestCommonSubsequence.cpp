
// recursive approach
class Solution {
public:
    int solve(string text1, string text2, int s1,int s2){
        if(s1==0||s2==0){
            return 0;
        }
        
        if(text1[s1-1]==text2[s2-1]){
            return 1 + solve(text1,text2,s1-1,s2-1);
        }
        else{
            return max(solve(text1,text2,s1-1,s2),solve(text1,text2,s1,s2-1));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        return solve(text1,text2,text1.size(),text2.size());
    }
};

//memoized recursion bottom up
class Solution {
public:
    int solve(string text1, string text2, int s1,int s2,vector<vector<int>>&t){
        if(s1==0||s2==0){
            t[s1][s2]=0;
            return 0;
        }
        if(t[s1][s2]!=-1){
            return t[s1][s2];
        }
        if(text1[s1-1]==text2[s2-1]){
            t[s1][s2]=1 + solve(text1,text2,s1-1,s2-1,t);
            return t[s1][s2];
        }
        else{
            t[s1][s2]=max(solve(text1,text2,s1-1,s2,t),solve(text1,text2,s1,s2-1,t));
            return t[s1][s2];
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        int s1 = text1.size();
        int s2 = text2.size();
        vector<vector<int>>t(s1+1,vector<int>(s2+1,-1));
        return solve(text1,text2,text1.size(),text2.size(),t);
    }
};

