class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        vector<vector<int>> a;
        int min_diff = INT_MAX;

        for(int i=1; i<arr.size(); i++) {
            int p = arr[i]-arr[i-1];
            min_diff = min(p,min_diff);
        }

        for(int i=1; i<arr.size(); i++) {
            if((arr[i]-arr[i-1])==min_diff) {
                a.push_back({arr[i-1],arr[i]});
            }
        }

        return a;
    }
};