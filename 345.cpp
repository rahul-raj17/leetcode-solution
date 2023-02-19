class Solution {
    private:
    bool isVowel(char c) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return 1;
        }
        return 0;
    }
public:
    string reverseVowels(string s) {
        int n=s.size();
        int st=0; 
        int e=n-1;
        
        while(st < e) {
            if(!isVowel(s[st])) {
                st++;
            }
            else if(!isVowel(s[e])) {
                e--;
            }
            else {
                swap(s[st],s[e]);
                st++;
                e--;
            }
        }
        return s;
    }
};