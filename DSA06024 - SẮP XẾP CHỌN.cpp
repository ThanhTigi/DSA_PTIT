// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	for (int i=0; i<n-1; i++)
	{
		int vt = i;
		for (int j=i+1; j<n; j++)
		{
			if (a[j] < a[vt]) vt = j;
		}
		swap(a[i],a[vt]);
		cout << "Buoc " << i+1 << ": ";
		for (int j=0; j<n; j++)
		{
			cout << a[j] << " ";
		}
		cout << endl;
	}
    return 0;
}
