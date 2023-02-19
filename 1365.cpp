//   How Many Numbers Are Smaller Than the Current Number
 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        
        for(int i=0; i<nums.size(); i++) {

            int count = 0;

            for(int j=0; j<nums.size(); j++) {

                if(j!=i && nums[j]<nums[i]) {
                    count++;
                }
                else {
                    continue;
                }
                
            }
            ans.push_back(count);
        }
        return ans;
    }