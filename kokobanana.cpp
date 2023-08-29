class Solution {
public:
    int hours(vector<int>&piles,int k){
        int size = piles.size();
        int hours = 0;
        if(k==0){
            return INT_MAX;
        }
        for(int i=0;i<size;i++){
            if(piles[i] % k != 0){
                hours = hours + 1;
            }
            hours = hours + piles[i]/k;
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int sum = 0;
        int max =0;
        for(int i =0;i<piles.size();i++){
            sum = sum + piles[i];
            if(max<piles[i]){
                max = piles[i];
            }
        }
        int left = sum/h;
        int right = max;
        int mid = 0;
        int hour = 0; 
        while(left<right){
            mid = (left + right)/2;
            hour = hours(piles,mid);
            if(hour>h){
                left = mid+1;
            }
            else{
                right = mid;
            }
        } 
        return right;
    }
};