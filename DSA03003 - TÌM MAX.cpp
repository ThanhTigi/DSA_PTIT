// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

void testCase()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    long long ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans = (ans + i * a[i]) % mod;
    }
    cout << ans;
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        testCase();
        cout << "\n";
    }
    return 0;
}