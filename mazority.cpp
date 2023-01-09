int majorityElement(int a[], int size)
    {
        int count=0;
       int mazority = size/2; 
        for(int i=0;i<size;i++)
        {
            count=0;
           for(int j=i+1;j<size;j++)
           {
               if(a[i] == a[j])
               {
                  count++;
                  if(count == mazority)
                  {
                      return a[i];
                  }
               }
           }
        }
        return -1;
        
    }