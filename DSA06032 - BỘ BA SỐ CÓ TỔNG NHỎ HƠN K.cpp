// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for (long long i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        long long dem = 0;
        for (long long i=0; i<n-2; i++)
        {
            if (a[i] >= k) break;
            for (long long j=i+1; j<n-1; j++)
            {
                if (a[i] + a[j] >= k) break;
                long long vt = lower_bound(a+j+1,a+n,k-a[i]-a[j]) - a;
                dem += (vt-j-1);
            }
        }
        cout << dem << endl;
    }
    return 0;

}
