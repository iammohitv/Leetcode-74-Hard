
// intuition: basically flatten the matrix and apply binary search without using extra space
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int left =0;
        int n = matrix.size();
        int m = matrix[0].size();
        int right = (n * m) - 1;

        int mid = (left+right)/2;

        while(left<=right){
            mid = (left + right)/2;
            int row = mid/m;
            int col = mid%m;

            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]>target){
                right = mid-1;
            }
            else{
                left = mid+1;
            }

        }
        return false;
        
    }
};