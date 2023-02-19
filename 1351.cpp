// count no of negative integer in sorted matrix
// using binary search
int m=grid.size(), n=grid[0].size(), r=0, c=n- 1;
		int ans=0;
		while(r < m){
			while(c >= 0 && grid[r][c] < 0){c--;}
			ans+=n-c-1;
			r++;
		}
		return ans;

// brutt force approach
int count = 0;
        for(int i=0; i<grid.size(); i++) {
            for(int j=0; j<grid[i].size(); j++) {
                if(grid[i][j] < 0) {
                count++;
                }
                else {
                    continue;
                }
            }
        }
        return count;
