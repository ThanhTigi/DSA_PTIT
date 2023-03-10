#include <bits/stdc++.h>
using namespace std;
long long fibo[100];

void TimKiem(long long n, long long k)
{
	if (n == 1 || n == 2)
	{
		if (n == 1)
			cout << 0;
		else
			cout << 1;
		return;
	}
	if (k <= fibo[n - 2])
		TimKiem(n - 2, k);
	else
		TimKiem(n - 1, k - fibo[n - 2]);
}
int main()
{
	fibo[0] = 0;
	fibo[1] = 1;
	fibo[2] = 1;
	for (long long i = 3; i < 100; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	long long t;
	cin >> t;
	while (t--)
	{
		long long n, k;
		cin >> n >> k;
		TimKiem(n, k);\
		cout << endl;
	}
	return 0;
}