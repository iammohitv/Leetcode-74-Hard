class Solution {
public:
    bool isValid(string s) {
        stack<char> mv;

        int s_n = s.size();
        if(s_n<2){
            return false;
        }
        for(int i=0;i<s_n;i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                mv.push(s[i]);
            }
            else{
                if(mv.size()>0){

                    if(mv.top()=='('&&s[i]==')'||mv.top()=='{'&&s[i]=='}'||mv.top()=='['&&s[i]==']'){
                    mv.pop();
                    continue;
                    }
                    else{
                        return false;
                    }

                }
                else{
                    return false;
                }
            }
        }
        int x = mv.size();
        if(x){
            return false;
        }
        return true;
    }
};