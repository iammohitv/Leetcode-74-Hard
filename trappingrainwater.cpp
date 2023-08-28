class Solution {
public:
    int trap(vector<int>& height) {

        vector<int> left_max;
        int l_max=0;
        int r_max=0;
        vector<int> right_max;
        int h_s = height.size();
        for(int i=0;i<h_s;i++){
            if(height[i]>l_max){
                l_max=height[i];
            }
            left_max.push_back(l_max);
        }
        for(int i=h_s-1;i>-1;i--){
            if(height[i]>r_max){
                r_max = height[i];
            }
            right_max.push_back(r_max);
        }
        int sum=0;
        for(int i=0;i<h_s;i++){
            if(left_max[i]>right_max[h_s-1-i]){
                sum += right_max[h_s-1-i] - height[i];
            }
            else{
                sum += left_max[i] - height[i];
            }

        }
        return sum;
    }
};