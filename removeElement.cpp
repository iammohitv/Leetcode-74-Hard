class Solution {
public:
    string reverseWords(string s) {
        vector<string> x;
        int count = 0;
        string word;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(count>0){
                    x.push_back(word);
                    word = "";
                    count = 0;
                }
                else{
                    count = 0;
                    word = "";
                }
            }
            else{
                word = word + s[i];
                count++;
            }
        }
        if(word.size()!=0){
            x.push_back(word);
        }
        string ans;
        for(int i=x.size()-1;i>=0;i--){
            ans +=x[i];
            if(i!=0){
                ans = ans + ' '; 
            }
        }
        return ans;
    }
};