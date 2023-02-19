// replace all digits with character
string replaceDigits(string s) {
        string ans;
        for(int i=0; i<s.length(); i++) {
            if(i%2 == 0) {
                ans.push_back(s[i]);
            }
            else {
                ans.push_back(s[i]-'0'+s[i-1]);
            }
        }
        return ans;
    }