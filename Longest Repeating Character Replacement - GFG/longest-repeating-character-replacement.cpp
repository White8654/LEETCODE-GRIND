//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int characterReplacement(string s, int k) {
        if (s.size() == 0) return 0;
        // Make an array...
        vector <int> arr(128);
        // Initialize largestCount & beg pointer...
        int beg = 0, largestCount = 0;
        // Traverse all characters through the loop...
        for (int end = 0; end < s.size(); end++) {
            // Get the largest count of a single, unique character in the current window...
            largestCount = max(largestCount, ++arr[s[end]]);
            // We are allowed to have at most k replacements in the window...
            // So, if max character frequency + distance between beg and end is greater than k...
            // That means we have met a largest possible sequence, we can move the window to right...
            if (end - beg + 1 - largestCount > k)       // The main equation is: end - beg + 1 - largestCount...
                arr[s[beg++]]--;
        }
        // Return the sequence we have passes, which is s.length() - beg...
        return s.length() - beg;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;

        Solution obj;
        cout << obj.characterReplacement(S, K) << endl;
    }
    return 0;
}
// } Driver Code Ends