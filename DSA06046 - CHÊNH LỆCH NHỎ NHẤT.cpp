// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        long long kq = LONG_LONG_MAX;  
        for (int i=0; i<n-1; i++)
        {
            kq = min(kq,abs(a[i+1] - a[i]));
        }
        cout << kq << endl;
    }
    return 0;
}
