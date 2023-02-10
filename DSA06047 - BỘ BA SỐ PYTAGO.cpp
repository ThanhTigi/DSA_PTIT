// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

void TimKiem(long long a[],int n)
{
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            if ((long long)sqrt(a[i]*a[i] + a[j]*a[j]) == sqrt(a[i]*a[i] + a[j]*a[j]))
            {
                if (binary_search(a+j+1,a+n,(long long)sqrt(a[i]*a[i] + a[j]*a[j])))
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
    return;
}
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
        TimKiem(a,n);
    }
    return 0;
}
