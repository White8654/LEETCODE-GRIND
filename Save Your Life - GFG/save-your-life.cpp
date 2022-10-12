//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){

          // code here      

          unordered_map<char, int> m;

          for(auto i:w) m[i] = i+0;

          for(int i=0;i<n;i++) m[x[i]] = b[i];

        //   for(auto i:m) cout<<i.first<<" "<<i.second<<endl;

          string ans = "", s1 = "";

          int s = 0, r = INT_MIN;

          for(auto i:w) {

              s1.push_back(i);

              s += m[i];

              r = max(s,r);

              if(r==s) ans = s1;

              if(s<0) {

                  s = 0;

                  s1 = "";

              }

          }

          return ans;

      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends