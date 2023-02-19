// Single Element in a Sorted Array
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int xr{};
        
        for(auto num: nums)
            xr = xr^num;
        
        return xr;
       
    }
};