class Solution {
public:
   //vector<int> dp(50,-1);
    //int dp[50] = {-1};
    // fill(dp.begin(), dp.end(), -1);
    int climbStairs(int n) {
     if(n == 2) return 2;
if(n == 1) return 1;
vector dp(n, 0);
dp[0] = 1;
dp[1] = 2;
for(size_t i = 2; i < n; ++i)
{
dp[i] = (dp[i-1] + dp[i-2]);
}
return dp[n-1];
}};