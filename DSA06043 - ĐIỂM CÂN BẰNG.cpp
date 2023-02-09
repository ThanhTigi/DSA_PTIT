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
        int a[n];
        long long sum[n] = {0};
        cin >> a[0];
        sum[0] = a[0];
        for (int i=1; i<n; i++)
        {
            cin >> a[i];
            sum[i] = sum[i-1] + a[i];
        }
        int vt = -1;
        for (int i=0; i<n-1; i++)
        {
            if (sum[i] * 2 == (sum[n-1] - a[i+1]))
            {
                vt = i+2;
                break;
            }
        }
        cout << vt << endl;
    }
    return 0;
}
