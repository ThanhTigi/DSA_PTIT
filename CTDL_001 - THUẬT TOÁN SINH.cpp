// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

void SinhNP(int n, int a[])
{
	int mid = (n%2==0) ? (n/2-1) : (n/2);
	while (1)
	{
		for (int i=0; i<n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		int i = mid;
		while (i>=0 && a[i] == 1)
		{
			i--;
		}
		if (i<0) return;
		a[i] = 1;
		a[n-1-i] = 1;
		for (int j=i+1; j<n-1-i; j++)
		{
			a[j] = 0;
		}
	}
}

int main() {
    int n;
    cin >> n;
    int a[n] = {0};
    SinhNP(n,a);
    return 0;
}
