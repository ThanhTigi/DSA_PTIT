// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        int dem = 0;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            if (a[i] == k) dem++;
        }
        cout << (dem==0 ? -1 : dem) << endl;
    }
    return 0;
}
