class Solution {
public:
    int countHillValley(vector<int>& nums) {
        // // taking a new vector
        // vector<int>v;
        // v.push_back(nums[0]);
		// //pushing unique elements into new vector
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]!=nums[i-1]){
        //         v.push_back(nums[i]);
        //     }
        // }
        // int c=0;
		// //checking for valley or hill
        // for(int i=1;i<v.size()-1;i++){
        //     if(v[i]>v[i-1] and v[i]>v[i+1] or v[i]<v[i-1] and v[i]<v[i+1]){
        //         c++;
        //     }
        // }
        // return c;

        int n=nums.size();
        int j=0;
        int a=0;
        for(int i=1;i<n-1;i++){
            if((nums[i]>nums[j] && nums[i]>nums[i+1])|| 
               (nums[j]>nums[i] && nums[i]<nums[i+1])){
                a++;
                j=i;
            }
        }
        return a;
    }
};