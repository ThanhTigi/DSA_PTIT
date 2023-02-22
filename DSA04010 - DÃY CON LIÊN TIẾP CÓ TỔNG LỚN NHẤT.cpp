// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, 
        ans = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            sum = max(a[i], sum + a[i]);
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
    return 0;
}