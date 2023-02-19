// Apply Operations to an Array

int j=0;
        for(int i=0 ;i<nums.size()-1;i++)
        {
             if(nums[i]!=nums[i+1])
               {
                continue;  
               }
            if(nums[i]==nums[i+1])
            {
               nums[i] =nums[i]*2;
                nums[i+1]=0;
            }
        }
        for(int i=0;i<nums.size();i++)  // MOVE ALL ZEROS TO END
        {
            if(i==j && nums[i]!=0)
            {
                j++;
                continue;
            }
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                nums[i]=0;
                j++;
            }
        }
         return nums; 