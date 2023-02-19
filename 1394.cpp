// Find Lucky Integer in an Array

int findLucky(vector<int>& arr) {
        map<int, int> mp;
        for(int i=0; i<arr.size(); i++) {
            mp[arr[i]]++;
        }

        int ans = -1;
        for(auto i:mp) {
            if(i.first == i.second ) {
                ans = max(ans,i.first);
            }
        }
        return ans;
    }