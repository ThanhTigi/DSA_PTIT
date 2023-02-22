// DSA_PTIT By Thanh TiGi
#include<bits/stdc++.h>
using namespace std;
char c;
int n,k;
int a[1000] = {};
void Try(int m)
{
    if (m==k+1)
    {
        for (int i=1; i<=k; i++)
        {
            cout << (char)(a[i]+'A' - 1);
        }
        cout << endl;
        return;
    }
    for (int i=a[m-1]; i<=n; i++)
    {
        a[m] = i;
        Try(m+1);
    }
}
int main()
{
    int t;
    t=1;
    a[0] = 1;
    while (t--)
    {
        cin >> c >> k;
        n = (int) (c-'A'+1);
        Try(1);
        cout << endl;
    }
    return 0;
}