// DSA_PTIT By Thanh TiGi
#include<bits/stdc++.h>
using namespace std;
int n,k,dem,kt;
int a[1000] = {},inp[1000] = {};
bool KiemTra()
{
    for (int i=1; i<=k; i++)
    {
        if (inp[i] != a[i]) return false;
    }
    return true;
}
void Try(int m)
{
    if (m==k+1)
    {
        dem++;
        if (KiemTra()) kt=1;
        return;
    }
    if (kt==1) return;
    for (int i=a[m-1]+1; i<=n-k+m; i++)
    {
        a[m] = i;
        Try(m+1);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i=1; i<=k; i++)
        {
            cin >> inp[i];
        }
        dem=0;
        kt=0;
        Try(1);
        cout << dem << endl;
    }
    return 0;
}