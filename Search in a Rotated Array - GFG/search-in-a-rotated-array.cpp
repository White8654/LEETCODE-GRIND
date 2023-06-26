//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int arr[], int l, int h, int k){
        if(l>h)
         return -1;
        int mid = l + (h-l)/2;
        if(arr[mid] == k)
         return mid;
        if(arr[mid] >= arr[l]){
            if(arr[l] <= k && arr[mid] >= k)
             return search(arr,l,mid-1,k);
            else
             return search(arr,mid+1,h,k);
        }
        else{
            if(arr[mid] <= k && arr[h] >= k)
             return search(arr,mid+1,h,k);
            else
             return search(arr,l,mid-1,k);
        }
        
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends