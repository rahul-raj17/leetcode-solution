// N-Repeated Element in Size 2N Array
int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        int ans;
        for(auto i:mp) {
            if(i.second == nums.size()/2) {
               ans = i.first;
            }
        }
        return ans;
    }