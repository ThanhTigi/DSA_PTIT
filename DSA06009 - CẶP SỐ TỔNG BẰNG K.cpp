// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int dem = 0;
        sort(a,a+n);
        for (int i=0; i<n; i++)
        {
            dem += ((upper_bound(a+i+1,a+n,m-a[i]) - a) - (lower_bound(a+i+1,a+n,m-a[i]) - a));
        }
        cout << dem << endl;
    }
    return 0;
}
