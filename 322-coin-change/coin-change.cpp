class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int m=amount;
        const int INF = 1e9;
        vector<vector<int>>dp(n+1,vector<int>(m+1,INF));
        for(int i=1;i<n+1;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }

        if(dp[n][m] == INF){
            return -1;
        }

        return dp[n][m];
    }
};