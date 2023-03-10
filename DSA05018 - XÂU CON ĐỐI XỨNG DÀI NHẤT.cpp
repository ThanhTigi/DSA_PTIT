#include <bits/stdc++.h>
using namespace std;

bool f[1000][1000];

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int n = s.length();
        memset(f, false, sizeof(f));
        for (int i = 0; i < n; ++i)
        {
            f[i][i] = true;
        }

        int res = 1;
        for (int k = 1; k < n; ++k)
        {
            for (int i = 0; i < n - k; ++i)
            {
                int j = i + k;
                if (s[i] == s[j] && k == 1)
                {
                    f[i][j] = 1;
                }
                else if (s[i] == s[j] && k > 1)
                {
                    f[i][j] = f[i + 1][j - 1];
                }
                else
                {
                    f[i][j] = 0;
                }
                if (f[i][j] == 1)
                {
                    res = max(res, j - i + 1);
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
