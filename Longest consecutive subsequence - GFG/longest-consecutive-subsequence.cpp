//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
         
        unordered_map<int ,bool>m;
        for(int i = 0 ;  i < N ;i++){
            m[arr[i]] = 1;
        }
        int c = 1;
        int maxi = 1;
      for(int i = 0 ; i < N ;i++){
          if(m[arr[i]-1]){
              int l = arr[i];
              while(m[l-1]){
                  c++;
                  l = l-1;
              }
              maxi = max(maxi,c);
              c=1;
              
          }
          m[arr[i]] = 1;
          
      }
      return maxi;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends