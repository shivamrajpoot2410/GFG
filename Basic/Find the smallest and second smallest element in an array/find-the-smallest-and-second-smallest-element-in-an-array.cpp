//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    vector<int>v;
    int small=9999;
    int sc_small = 9999;
    for(int i=0; i<n ;i++)
    {
        if(a[i]<small)
        {
            small = a[i];
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]<sc_small && a[i]>small)
        {
            sc_small = a[i];
        }
    }
    if(small==9999 || sc_small==9999) return {-1};
    else
    {
            v.push_back(small);
    v.push_back(sc_small);
    return v;
    }


}