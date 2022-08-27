class Solution {
public:
 
    int climbStairs(int n) {
        int dp[n + 1];
    memset(dp, -1, sizeof dp);
         solve(n,dp);
        return dp[n];
    }
    int solve(int n , int dp[]){
          if(n == 0)
            return dp[n] = 1;
        if(n == 1)
            return dp[n] =1;
        if(dp[n] != -1)
            return dp[n];
        return dp[n] = solve(n-1,dp) + solve(n-2,dp);
    }
};