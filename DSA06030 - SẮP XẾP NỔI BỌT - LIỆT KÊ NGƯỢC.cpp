// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
	cin >> t;
	while (t--)
	{
		int n;
    	cin >> n;
	    int a[n];
		vector<int> kq;
	    for (int i=0; i<n; i++)
		{
			cin >> a[i];
			kq.push_back(a[i]);
		}
		vector<vector<int>> cons;
		for (int i=0; i<n-1; i++)
		{
			int check = 0;
			for (int j=0; j<n-1; j++)
			{
				if (kq[j] > kq[j+1])
				{
					check = 1;
					swap(kq[j],kq[j+1]);
				}
			}
			if (check == 0) break;
			cons.push_back(kq);
		}
		for (int i=cons.size()-1; i>=0; i--)
		{
			cout << "Buoc " << i+1 << ": ";
			for (int j=0; j<n; j++)
			{
				cout << cons[i][j] << " ";
			}
			cout << endl;
		}
	}
    return 0;
}
