 int count = 0;
        int prefixlength = pref.size();
        for(auto i:words) {
            if(i.substr(0,prefixlength) == pref) {
                count++;
            }
        }
        return count;