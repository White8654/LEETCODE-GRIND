//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>graph[]){
	    int m = V;
        vector<int> color(m,-1);
      
        queue<int> q;

        for(int j = 0 ; j < m ; j++){

        if(color[j] != -1)
         continue;

        q.push(j);
     
       
        color[j] = 1;

        while(!q.empty()){
            int fr = q.front();
            q.pop();

            for(auto i : graph[fr]){
                if(color[i]  == -1){
                    
                    color[i] = !color[fr];
                    q.push(i);
                }else{
                    if(color[i] == color[fr])
                     return 0;
                }

            }

            
        }}
        return 1;

	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends