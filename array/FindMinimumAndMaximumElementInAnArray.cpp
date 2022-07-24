//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long arr[], int n) {
    long long max_ele = INT_MIN;
    long long min_ele = INT_MAX;
    for(long long i=0;i<n;i++)
    {
        if(arr[i]>max_ele)max_ele = arr[i];
        if(arr[i]<min_ele)min_ele = arr[i];
    }
        
        pair<long long ,long long>p;
        p.first = min_ele;
        p.second = max_ele;
        
        return p;
    
}