// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;


int main() {
    long long t;
    cin >> t;
    while (t--)
    {
        long long n,m;
        cin >> n >> m;
        long long a[n];
        for (long long i=0; i<n; i++)
        {
            cin >> a[i];
        }
        long long dem = 0;
        sort(a,a+n);
        for (long long i=0; i<n; i++)
        {
            dem += ((upper_bound(a+i+1,a+n,m-a[i]) - a) - (lower_bound(a+i+1,a+n,m-a[i]) - a));
        }
        cout << dem << endl;
    }
    return 0;
}
