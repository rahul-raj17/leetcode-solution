class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0;
        int digit_sum = 0;
        for(int i=0; i<nums.size(); i++) {
            element_sum = element_sum + nums[i];
            while(nums[i] > 0) {
                int p = nums[i] % 10;
                nums[i] = nums[i] / 10;
                digit_sum = digit_sum + p;
            }
        }
        return abs(element_sum - digit_sum);
        
    }
};