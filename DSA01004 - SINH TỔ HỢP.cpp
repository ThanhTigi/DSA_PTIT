// DSA_PTIT By Thanh TiGi
#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1000] = {};
void Try(int m)
{
    if (m==k+1)
    {
        for (int i=1; i<=k; i++)
        {
            cout << a[i];
        }
        cout << " ";
        return;
    }
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
        Try(1);
        cout << endl;
    }
    return 0;
}