//  Defanging an IP Address
 string defangIPaddr(string address) {
        int n=address.length();
        string s;
        for(int i=0; i<n; i++) {
            if(address[i] == '.') {
                s = s + "[.]";
            }
            else {
                s = s+address[i];
            }
        }
        return s;
    }