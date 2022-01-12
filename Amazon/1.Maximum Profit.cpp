class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
        // code here
        vector<vector<int>> dp(K+1,vector<int>(N,0));
        
        for(int i=1;i<=K;i++)
        {
            int mx=INT_MIN;
            for(int j=1;j<N;j++)
            {
                mx=max(mx,dp[i-1][j-1]-A[j-1]);
                dp[i][j]=max(dp[i][j-1],mx+A[j]);
            }
        }
        
        return dp[K][N-1];
    }
};
