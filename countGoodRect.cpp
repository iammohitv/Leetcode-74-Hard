class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int r_s=rectangles.size();
        vector<int> squares;
        for(int i=0;i<r_s;i++){
            int x = rectangles[i][0]<rectangles[i][1]?rectangles[i][0]:rectangles[i][1];
            squares.push_back(x);
        }
        int max=-1;
        for(int i=0;i<r_s;i++){
            if(squares[i]>max){
                max=squares[i];
            }
        }
        int ans=0;
        for(int i=0;i<r_s;i++){
            if(squares[i]==max){
                ans++;
            }
        }
        return ans;
    }
};