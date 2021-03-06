class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long prod=1;
        int ans=0;
        
        int j=0;
        for(int i=0;i<n;i++)
        {
            prod*=a[i];
            
            if(prod>=k)
            {
                while(j<i)
                {
                    prod/=a[j];
                    if(prod<k)
                    {
                        ans+=i-j;
                        j++;
                        break;
                    }
                    j++;
                }
            }
            else
            {
                ans+=(i-j+1);
            }
        }
        
        return ans;
    }
};
