// first and last occurance of an element in sorted array
class Solution {
public:
    int firstOccurance(vector<int>& arr, int n, int k) {
        
        int start = 0; 
        int end = n-1;
        int ans = -1;
        int mid = start + (end - start)/2;
        while(start <= end) {
            // int mid = start + (end - start)/2;
            if(arr[mid]==k) {
                ans = mid;
                end = mid - 1;
            }
            else if(k > arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
    
    int lastOccurance(vector<int>& arr, int n, int k) {
        
        int start = 0; 
        int end = n-1;
        int mid = start + (end - start)/2;
        int ans = -1;
        while(start <= end) {
            // int mid = start + (end - start)/2;
            if(k == arr[mid]) {
                ans = mid;
                start = mid + 1;
            }
            else if(k > arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0)
            return {-1,-1};
        // return{firstOccurance(nums,nums.size(),target), lastOccurance(nums,nums.size(),target)};
         int k=firstOccurance(nums,nums.size(),target);
        int n=lastOccurance(nums,nums.size(),target);
        return {k,n};
    }
};
