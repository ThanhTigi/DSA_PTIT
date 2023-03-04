// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

vector<long long> f(55);

void testCase()
{
    long long n, k;
    cin >> n >> k;
    for (int i = n; i >= 1; --i)
    {
        if (k > f[i])
            k -= f[i];
        else if (k == f[i])
        {
            cout << i;
            return;
        }
    }
}

void prepare()
{
    f[1] = 1;
    for (int i = 2; i < f.size(); ++i)
    {
        f[i] = f[i - 1] * 2;
    }
}

int main()
{
    prepare();
    int T = 1;
    cin >> T;
    while (T--)
    {
        testCase();
        cout << "\n";
    }
    return 0;
}