string reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}
string findLCS(int s1, int s2,string &text1, string &text2){
	vector<vector<string>>t(s1+1,vector<string>(s2+1,""));
        // for(int i=0;i<s1+1;i++){
        //     for(int j=0;j<s2+1;j++){
        //         if(i==0||j==0){
        //             t[i][j]=0;
        //         }
        //     }
        // }
        for(int i=1;i<s1+1;i++){
            for(int j=1;j<s2+1;j++){
                if(text1[i-1]==text2[j-1]){
                    t[i][j] = text1[i-1] + t[i-1][j-1];
                }
                else{
                    if(t[i-1][j].size()>t[i][j-1].size()){
                        t[i][j]= t[i-1][j];
                    }else{
                        t[i][j]=t[i][j-1];
                    }
                    // t[i][j]= max(t[i-1][j].size(),t[i][j-1].size());
                }
            }
        }
        string ans=reverseStr(t[s1][s2]);
        return ans;	
}