// arranging coins
int arrangeCoins(int n) {
        int count = 0;
        for(int i=1; i<=n; i++) {
            if((n-i)<0) {
                break;
            }
            else {
                count++;
                n=n-i;
            }
        }
        return count;
        
    }