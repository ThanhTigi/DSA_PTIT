#include <bits/stdc++.h>
using namespace std;

int f[1000][1000];

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        int n = s.length();
        memset(f,0,sizeof(f));
        for (int i = 0; i < n; ++i)
        {
            f[i][i] = 0;
        }

        for (int k = 1; k < n; ++k)
        {
            for (int i = 0; i < n - k; ++i)
            {
                int j = i + k;
                if (s[i] == s[j] && k == 1)
                {
                    f[i][j] = 0;
                }
                else if (s[i] == s[j] && k > 1)
                {
                    f[i][j] = f[i + 1][j - 1];
                }
                else
                {
                    f[i][j] = min(f[i+1][j],f[i][j-1]) + 1;
                }
            }
        }
        cout << f[0][n-1] << endl;
    }
    return 0;
}
