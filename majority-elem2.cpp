class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n_s = nums.size();
        int element1 = INT_MIN;
        int element2 = INT_MIN;
        int count1 = 0;
        int count2 = 0;
        for(int i=0;i<n_s;i++){
            if(count1==0&&nums[i]!=element2){
                element1=nums[i];
                count1++;
            }
            else if(count2==0&&nums[i]!=element1){
                element2=nums[i];
                count2++;
            }
            else if(nums[i]==element1){
                count1++;
            }
            else if(nums[i]==element2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
    count1=0;
    count2=0;
     for (int i=0;i<n_s;i++){
		if (nums[i] == element1){
            count1++;
        }
		else if (nums[i] == element2){
            count2++;
        }
    }
	  vector<int> ans;
	  if (count1 > size(nums)/3) ans.push_back(element1);
	  if (count2 > size(nums)/3) ans.push_back(element2);
	  return ans;
    }
};