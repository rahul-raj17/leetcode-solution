//  Number of Good Pairs
// int numIdenticalPairs(vector<int>& nums) {
//         int count = 0;
//         for(int i=0; i<nums.size(); i++) {
//             for(int j=i+1; j<nums.size(); j++) {
//                 if(nums[i]==nums[j]) {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }

 int count = 0;
        unordered_map<int, int> ump;
        for(int i=0;i<nums.size();i++) {
            if(ump[nums[i]] > 0) {
                count += ump[nums[i]];
            }
            ump[nums[i]]++;
        }
        return count;