class Solution {
public:
    void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());  
        // 3 pointer approach
        int i=0;
        int j=0;
        int k=nums.size()-1;
        while(j<=k) {
            if(nums[j] == 0) {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else if(nums[j] == 1) {
                j++;
            }
            else {
                swap(nums[j],nums[k]);
                k--;
            }
        }
    }
};