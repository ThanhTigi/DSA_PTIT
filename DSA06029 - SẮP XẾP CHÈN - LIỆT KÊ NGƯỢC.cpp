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
	vector<int> kq;
	vector<vector<int>> cons;
	kq.resize(n);
	for (int i=0; i<n; i++)
	{
		int j=i-1;
		while (j>=0 && kq[j] > a[i])
		{
			kq[j+1] = kq[j];
			j--;
		}
		kq[j+1] = a[i];
		cons.push_back(kq);
	}
	for (int i = n-1; i>=0; i--)
	{
		cout << "Buoc " << i << ": ";
		for (int j=0; j<=i; j++)
		{
			cout << cons[i][j] << " ";
		}
		cout << endl;
	}
    return 0;
}
