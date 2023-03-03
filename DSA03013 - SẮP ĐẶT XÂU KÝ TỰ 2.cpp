// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

void testCase()
{
    int d;
    cin >> d;
    string s;
    cin >> s;
    int dd[127] = {};
    int maxx = 0;
    for (char i : s)
    {
        dd[i]++;
        maxx = max(maxx, dd[i]);
    }
    if (maxx <= ceil((float)s.length() / d))
        cout << 1;
    else
        cout << -1;
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