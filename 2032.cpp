// two out of three
vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> mp1;
        for(int i=0; i<nums1.size(); i++) {
            mp1[nums1[i]] = 1;
        }

        unordered_map<int, int> mp2;
        for(int i=0; i<nums2.size(); i++) {
            mp2[nums2[i]] = 1;
        }

        unordered_map<int, int> mp3;
        for(int i=0; i<nums3.size(); i++) {
            mp3[nums3[i]] = 1;
        }

        vector<int> ans;
        for(int i=0; i<101; i++) {
            if(mp1[i]+mp2[i]+mp3[i]==3||mp1[i]+mp2[i]+mp3[i]==2) {
                ans.push_back(i);
            }
        }
        return ans;
    }