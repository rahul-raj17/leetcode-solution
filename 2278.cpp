// Percentage of Letter in String
int percentageLetter(string s, char letter) {
        int count = 0;
        int n = s.size();
        for(int i=0; i<n; i++) {
            if(s[i]==letter) {
                count++;
            }
            else {
                continue;
            }
        }
        int p = count;
        int ans = (p*100)/n;
        return ans;
    }