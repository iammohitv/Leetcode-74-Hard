// start from back check greater elements and start pushing back
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m + n -1;

        while(m>0 && n>0){
            if(nums1[m-1]>nums2[n-1]){
                nums1[k] = nums1[m-1];
                k--;
                m--;
            }
            else{
                nums1[k]=nums2[n-1];
                k--;
                n--;
            }
        }
        if(n>0){
            while(n>0){
                nums1[k]=nums2[n-1];
                k--;
                n--;
            }
        }
        if(m>0){
            while(m>0){
                nums1[k]=nums1[m-1];
                k--;
                m--;
            }
        }
        
        
    }
};