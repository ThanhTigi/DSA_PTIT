// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
	t= 1;
	while (t--)
	{
		int n; 
		cin >> n;
		int a[n];
		vector<int> temp;
		for (int i=0; i<n; i++)
		{
			cin >> a[i];
			temp.push_back(a[i]);
		}
		vector<vector<int>> kq;
		for (int i=0 ; i<n-1; i++)
		{
			int vt = i;
			for (int j=i+1; j<n; j++)
			{
				if (temp[vt] > temp[j]) vt = j;
			}
			swap(temp[i],temp[vt]);
			kq.push_back(temp);
		}
		for (int i=n-2; i>=0; i--)
		{
			cout << "Buoc " << i+1 << ": ";
			for (int j=0; j<n; j++)
			{
				cout << kq[i][j] << " ";
			}
			cout << endl;
		}
	}
    return 0;
}
