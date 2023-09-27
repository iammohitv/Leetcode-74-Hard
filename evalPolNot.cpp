class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack <int> mv1;
        int siz = tokens.size();
        for(int i=0;i<siz;i++){
            if(tokens[i]=="-"||tokens[i]=="+"||tokens[i]=="*"||tokens[i]=="/"){
                int a = mv1.top();
                mv1.pop();
                int b = mv1.top();
                mv1.pop();
                if(tokens[i]=="-"){
                    mv1.push(b-a);
                }else if(tokens[i]=="+"){
                    mv1.push(b+a);
                }else if(tokens[i]=="/"){
                    mv1.push(b/a);
                }else if(tokens[i]=="*"){
                    mv1.push(b*a);
                }
            }
            else{
                mv1.push(stoi(tokens[i]));
            }
        }
        return mv1.top();
    }
};