//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
void dfs(vector<vector<int>> &ans , int i ,int j,int m ,int n , int color, int old){
    if(i == m || i < 0 || j == n || j < 0 || ans[i][j] == color || ans[i][j] != old)
     return;

    ans[i][j] = color;
   dfs(ans,i-1,j,m,n,color,old);
   dfs(ans,i,j-1,m,n,color,old);
   dfs(ans,i+1,j,m,n,color,old);
   dfs(ans,i,j+1,m,n,color,old);
    
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
         int m = image.size();
         int n = image[0].size();
        vector<vector<int>> ans = image;
            dfs(ans,sr,sc,m,n,color,ans[sr][sc]);
            return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends