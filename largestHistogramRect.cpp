class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();
        heights.push_back(0);

        vector<int> left_v(n,-1);
        vector<int> right_v(n,n);

        stack<int> left1;
        stack<int> left_index;
        stack<int> right1;
        stack<int> right_index;
        
        for(int i=0;i<n;i++){
            if(left1.empty()){
                left_v[i]=-1;
                left1.push(heights[i]);
                left_index.push(i);
            }
            else{
                int flag =0;
                while(heights[i]<=left1.top()){
                    left1.pop();
                    left_index.pop();
                    if(left1.empty()){
                        flag=1;
                        left_v[i]=-1;
                        left1.push(heights[i]);
                        left_index.push(i);
                        break;
                    }
                }
                if(flag==0){
                    left_v[i] = left_index.top();
                    left1.push(heights[i]);
                    left_index.push(i);
                }
                
            }
        }

        for(int i=n-1;i>-1;i--){
            if(right1.empty()){
                right_v[i]=n;
                right1.push(heights[i]);
                right_index.push(i);
            }
            else{
                int flag =0;
                while(heights[i]<=right1.top()){
                    right1.pop();
                    right_index.pop();
                    if(right1.empty()){
                        flag=1;
                        right_v[i]=n;
                        right1.push(heights[i]);
                        right_index.push(i);
                        break;
                    }
                }
                if(flag==0){
                    right_v[i] = right_index.top();
                    right1.push(heights[i]);
                    right_index.push(i);
                }
                
            }
        }
        int ans=0;
        for(int i=0;i<left_v.size();i++){
            int mv = heights[i]*((right_v[i]-left_v[i])-1);
            if(ans<mv){
                ans = mv;
            }
        }
        return ans;
    }
};