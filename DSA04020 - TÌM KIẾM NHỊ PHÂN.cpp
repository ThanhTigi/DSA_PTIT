#include <bits/stdc++.h>
using namespace std;
long long binarysearch(long long a[],long long n,long long k)
{
	long long l=0,r=n-1;
	while (l<=r)
	{
		long long mid = (r+l)/2;
		if (a[mid] == k) return mid;
		if (a[mid] < k) l=mid+1;
		else r=mid-1;
	}
	return -1;
}
int main()
{
	long long t;
	cin >> t;
	while (t--)
	{

		long long n,k;
		cin >> n >> k;
		long long a[n];
		for (long long i=0; i<n; i++)
		{
			cin >> a[i];
		}
		long long vt=binarysearch(a,n,k);
		if (vt!=-1) cout << vt+1 <<endl;
		else cout << "NO\n";
	}
	return 0;
}