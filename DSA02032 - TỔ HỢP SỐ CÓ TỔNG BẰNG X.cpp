// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int q[100], a[100];
int n, x;
vector<vector<int>> kq;

void in(int n)
{
    vector<int> temp(q+1,q+n+1);
    kq.push_back(temp);
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
        kq.clear();
        Try(1, 0);
        if (kq.empty())
            cout << "-1";
        else
        {
            cout << kq.size() << " ";
            for (auto x : kq)
            {
                cout << "{";
                for (int j=0; j<x.size()-1; j++)
                {
                    cout << x[j] << " ";
                }
                cout << x[x.size()-1] << "} ";
            }
        }
        cout << endl;
    }
}