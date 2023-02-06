// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        multiset<long long> mset;
        for (int i=0; i<n+m; i++)
        {
            long long k;
            cin >> k;
            mset.insert(k);
        }
        for (auto x : mset)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}