// Kth Missing Positive Number
for(int i=0;i<arr.size();i++)
        {
            int x=arr[i]-(i+1);
            if(x>=k)
                return i+k;
        }
        return arr.size()+k;
