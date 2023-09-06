class Solution {
public:
    bool checkValidString(string s) {
        int open = 0;
        int star = 0;
        int used = 0;
        for(char i:s)
        {
          if(i == '(')
          {
            open++;
          }
          else if(i == '*')
          {
            if(open > 0)
            {
              used++;
              open--;
            }
            else
            {
              star++;
            }
          }
          else
          {
            if(open > 0)
            {
              open--;
            }
            else if(star > 0)
            {
              star--;
            }
            else if(used>0)
            {
              used--;
              star++;
            }
            else
            {
              return false;
            }
          }
        }

        if(open == 0)
        {
          return true;
        }

        return false;
    }
};