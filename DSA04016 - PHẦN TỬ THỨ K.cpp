#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		long long m, n, k;
		cin >> n >> m >> k;
		vector<long long> mq;
		for (long long i = 0; i < n + m; i++)
		{
			long long temp;
			cin >> temp;
			mq.push_back(temp);
		}
		sort(mq.begin(), mq.end());
		cout << mq[k - 1] << endl;
	}
	return 0;
}