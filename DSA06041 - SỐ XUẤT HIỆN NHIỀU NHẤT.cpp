// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        map<int, int> m;
        for (int i = 1; i <= n; ++i) 
        {
            int x; 
            cin >> x;
            m[x]++;
        }
        int kt = 0;
        for (auto i : m) 
        {
            if (i.second > n / 2) 
            {
                cout << i.first;
                kt = 1;
            }
        }
        if (kt == 0) cout << "NO";
        cout << endl;
    }
    return 0;
}
