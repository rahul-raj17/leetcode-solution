// Find the Difference of Two Arrays
vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> h1;
        for(int i=0; i<nums1.size(); i++) {
            h1.insert(nums1[i]);
        }
        unordered_set<int> h2;
        for(int i=0; i<nums2.size(); i++) {
            h2.insert(nums2[i]);
        }
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<nums1.size();i++){
            if((h1.find(nums1[i])!=h1.end()) && (h2.find(nums1[i])==h2.end())){
                v1.push_back(nums1[i]);
                h1.erase(nums1[i]);
            }
        }
        for(int i=0;i<nums2.size();i++){
            if(((h2.find(nums2[i])!=h2.end()))&&(h1.find(nums2[i])==h1.end())){
                v2.push_back(nums2[i]);
                h2.erase(nums2[i]);
            }
        }
      
        return {v1,v2};
    }