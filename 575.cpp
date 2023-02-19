// distribute candies
unordered_set<int> s;
        for(int it:candyType) {
            s.insert(it);
        }
        int ans = min(s.size(),candyType.size()/2);
        return ans;