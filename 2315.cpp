//   Count Asterisks
 int countAsterisks(string s) {
        int count_asterisks = 0;
        int count_bar = 0;
        int n = s.length();
        for(int i=0; i<n; i++) {
            if(count_bar%2 == 0 && s[i] == '*') {
                count_asterisks++;
                
            }
            else if(s[i] == '|') {
                count_bar++;
            }
            
            else { 
                continue;
            }
        }
        return count_asterisks;
    }