//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
int primefactors(int n, vector<int>&v)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            v.push_back(i);
            n = n/i;
        }
    }

 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        v.push_back(n);
    int a= *max_element(v.begin(),v.end());
     return a;
}
    int largestPrimeFactor(int N){
        // code here
        vector<int>v;
        return primefactors(N,v);
       
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends