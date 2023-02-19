// Check If N and Its Double Exist
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count=0;
        for(int i=0; i<arr.size(); i++) {
            if(binary_search(arr.begin(),arr.end(),2*arr[i]) && arr[i]!=0) {
                return true;
            } 
            if(arr[i]==0) {
                count++;
            }
        }
        if(count > 1) {
            return true;
        }
        
        return false;
    }
};