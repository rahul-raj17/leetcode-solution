// reverse string ll
string reverseStr(string s, int k) {
        int n=s.size();
        for(int i=0; i<n; i=i+2*k) {
            string str = s.substr(i,k);
            reverse(str.begin(),str.end());
            s.replace(i,k,str);
        }
        return s;
    }
