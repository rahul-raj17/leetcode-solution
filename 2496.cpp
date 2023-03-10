// Maximum Value of a String in an Array
int maximumValue(vector<string>& strs) {
       int ans = 0;
        for(auto x: strs) {
            int val = x.size(), cnt = 0;
            for(auto c: x)
            {
                if(c >= '0' and c <= '9') 
                cnt++;
            } 
            if(cnt == val) 
            {
                val = stoi(x);
            }
            ans = max(ans, val);
        }
        return ans;
    }