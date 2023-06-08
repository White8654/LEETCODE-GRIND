//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubarray(int n, vector<int>& nums, int k) {
        return solve(nums,k) - solve(nums,k-1);
    }
    int solve(vector<int>nums, int k){
        int  i = 0 ; int  res = 0 ; int s = 0 ;
        for(int j = 0 ; j < nums.size() ;j++){
            s += nums[j] % 2;
            while(s > k){
                s -= nums[i++] % 2;
            }
            res += (j - i + 1);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.countSubarray(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends