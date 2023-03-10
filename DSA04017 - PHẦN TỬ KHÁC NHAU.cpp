#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		long long m, n, k;
		cin >> n;
		long long a[n];
		for (long long i=0; i<n; i++)
		{
			cin >> a[i];
		}
		int vt=-1;
		for (long long i=0; i<n-1; i++)
		{
			long long temp;
			cin >> temp;
			if (vt==-1 && temp!=a[i]) vt = i;
		}
		cout << vt+1 << endl;
	}
	return 0;
}