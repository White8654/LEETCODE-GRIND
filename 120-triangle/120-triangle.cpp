class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        vector<vector<int>> dp(m,vector<int> (m,-1));
        return solve(0,0,m,dp,triangle);
            
    }
    int solve(int i,int j,int m,vector<vector<int>> &dp,vector<vector<int>>&t){
        if(i == m-1)
            return t[i][j];
         if( j > i)
             return INT_MAX;
        if(dp[i][j] != -1)
            return dp[i][j];
        else
            return dp[i][j] =t[i][j] + min(solve(i+1,j,m,dp,t) , solve(i+1,j+1,m,dp,t));
     }
};