// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;
int n;
int a[10000];
int b[10000];
int check[10000];

void Try(int m)
{
    if (m==n)
    {
        for (int i=0; i<n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i=0; i<n; i++)
    {
        if (check[i] == 0)
        {
            b[m] = a[i];
            check[i] = 1;
            Try(m+1);
            check[i] = 0;
        }
    }
}
int main()
{
    int t;
    t=1;
    while (t--)
    {
        cin >> n;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            check[i]=0;
        }
        sort(a,a+n);
        Try(0);
    }
    return 0;
}