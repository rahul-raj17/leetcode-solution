// Maximum Count of Positive Integer and Negative Integer
int maximumCount(vector<int>& nums) {
        int count =0;
        int cnt = 0;
        int maximum;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] < 0) {
                count++;
            }
            int p=count;
            if(nums[i] > 0) {
                cnt++;
            }
            int q=cnt;
            maximum = max(p,q);
        }
        return maximum;
    }