// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        cin >> a[0];
        long long dem = n-1;
        for (long long i=1; i<n; i++)
        {
            cin >> a[i];
        }
        while (dem > 0 && a[dem] >= a[dem-1]) dem--;
        cout << dem << endl;
    }
    return 0;
}
