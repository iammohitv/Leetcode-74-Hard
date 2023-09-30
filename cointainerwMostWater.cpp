class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = INT_MIN;
        int left = 0;
        int right = height.size() - 1;
        while(left<right){
            int water = 0;
            if(height[left] >= height[right]){
                water = height[right]*(right-left);
                right--;
            }
            else if(height[left] < height[right]){
                water = height[left]*(right-left);
                left++;
            }
            
            if(water>max){
                max = water;
            }
        }
        return max;
    }
};