// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        long long dem = 0;
        for (int i=0; i<n-1; i++)
        {
            int vt = lower_bound(a+i+1,a+n,k+a[i]) - a;
            dem += (vt-i-1);
        }
        cout << dem << endl;
    }
    return 0;
}
