//  Make Two Arrays Equal by Reversing Subarrays
 bool canBeEqual(vector<int>& target, vector<int>& arr) {
        map<int,int> mp1;
        for(int i=0; i<target.size(); i++) {
            mp1[target[i]]++;
        }
        map<int,int> mp2;
        for(int j=0; j<arr.size(); j++) {
            mp2[arr[j]]++;
        }
        if(mp1 == mp2) {
            return true;
        }
        else {
            return false;
        }
    }