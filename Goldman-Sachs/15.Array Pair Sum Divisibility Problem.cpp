class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        vector<int> rem(k,0);
        int i;
        for(i=0;i<nums.size();i++)
        {
            rem[nums[i]%k]++;
        }
        if(rem[0]>0 && rem[0]%2!=0)
        return false;
        
        for(i=1;i<k;i++)
        {
            if(rem[i]!=0)
            {
                if(rem[i]!=rem[k-i])
                return false;
            }
        }
        return true;
    }
};
