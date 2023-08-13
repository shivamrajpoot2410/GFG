//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        int a1 = 1;

        int a2 = 1;

        int a3;

        if(n == 1 || n == 2)    return 1;

        for(int i = 3; i <= n; ++i){

            a3 = (a2 + a1)%1000000007;

            a1 = a2;

            a2 = a3;

        }

        return a3; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends