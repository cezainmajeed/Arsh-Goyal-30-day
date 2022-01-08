class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0;
        int n=nums.size();
        int curr=0,ans=INT_MAX;
        while(high<n)
        {
            curr+=nums[high];
            while(low<=high && curr>=target)
            {
                ans=min(ans,high-low+1);
                curr-=nums[low];
                low++;
            }
            high++;
        }
        
        if(ans==INT_MAX)
            ans=0;
        
        return ans;
    }
};
