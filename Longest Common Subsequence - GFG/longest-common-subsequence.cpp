//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x1, int y2, string s1, string s2)
    {
         int x = s1.size();
         int y = s2.size();
         
        vector<int> dp(y+1,0);
        
       
        for(int i = 1 ; i < x + 1; i++ ){
             int p = 0;
            int c = 0;
            for(int j = 1 ; j < y +1 ; j++){
                c = dp[j];
                if(s1[i-1] != s2[j-1])
                 dp[j] = max(dp[j-1] , dp[j]);
                else
                  dp[j] = p+ 1;
                  p = c;
            }
        }
        
        return dp[y];
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends