#include <bits/stdc++.h>

using namespace std;

int M = 1e9 + 7;
long long f[1005][1005];

void init()
{
	for (int i=1; i<=1000; i++)
	{
		f[i][1] = i;
	}
	for (int i=1; i<=1000; i++)
	{
		for (int j=2; j<=i; j++)
		{
			f[i][j] = (i * f[i-1][j-1]) % M;
		}
	}
}

int main()
{
	init();
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k > n) cout << "0\n"; 
        else cout << f[n][k] << endl;
    }
}