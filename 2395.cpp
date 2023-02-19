//  find subarrays with equal sum
 bool findSubarrays(vector<int>& nums) {
        unordered_map<int, int> mp;
        int sum = 0;
        for(int i=0; i<nums.size()-1; i++) {
            sum = nums[i] + nums[i+1];
            mp[sum]++;
        }

        for(auto it:mp) {
            if(it.second>1) {
                return true;
            }
        }
        return false;
        
    }