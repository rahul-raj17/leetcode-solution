class Solution {
public:
    string truncateSentence(string s, int k) {
        int space = 0;
        int i=0; 
        int n = s.size();
        string ans = "";
        while((i != n)) {
            if(s[i] == ' ') {
                space++;
            }
            if(space == k) {
                break;
            }
            ans = ans + s[i];
            i++;
            
        }
        return ans;
    }
};