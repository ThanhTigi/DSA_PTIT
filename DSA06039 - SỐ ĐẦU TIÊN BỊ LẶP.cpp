// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n],b[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        int kt = 0;
        for (int i=0; i<n; i++)
        {
            int vt = lower_bound(b,b+n,a[i]) - b;
            if (vt < n-1 && b[vt+1] == b[vt])
            {
                cout << a[i] << endl;
                kt = 1;
                break;
            }
        }
        if (kt==0) cout << "NO" << endl;
    }
    return 0;
}