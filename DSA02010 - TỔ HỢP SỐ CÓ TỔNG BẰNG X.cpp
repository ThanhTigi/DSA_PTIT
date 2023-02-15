// DSA_PTIT By Thanh TiGi
#include<bits/stdc++.h>
using namespace std;

int q[100], a[100];
int n, x, kt;

void in(int n)
{
    kt=1;
    cout << "[";
    for (int i = 1; i <= n; i++)
    {
        cout << q[i];
        if (i != n) cout << " ";
    }

    cout << "]";
}
void Try(int i, int s)
{
    for (int j = 1; j <= n; j++)
    {
        if (a[j] >= q[i - 1] && s + a[j] <= x)
        {
            q[i] = a[j];
            s += a[j];
            if (s == x)
                in(i);
            else
                Try(i + 1, s);
            s -= a[j];
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        kt = 0;
        Try(1, 0);
        if (kt==0) cout << "-1";
        cout << endl;
    }
}