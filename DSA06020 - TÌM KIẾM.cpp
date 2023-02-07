// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        } 
        sort(a,a+n);
        cout << (binary_search(a,a+n,k) ? "1\n" : "-1\n");
    }
}
