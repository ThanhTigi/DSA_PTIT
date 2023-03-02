// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

void testCase() 
{
    int n, s;
    cin >> n >> s;
    int a[n], f[s + 1] = {};
    f[0] = 1; // qhd
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
        for (int j = s; j >= 1; --j) 
        {
            if (j >= a[i] && f[j] == 0 && f[j - a[i]] == 1) 
            {
                f[j] = 1;
            }
        }
    }
    cout << (f[s] == 1 ? "YES" : "NO");
}

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        testCase();
        cout << "\n";
    }
    return 0;
}