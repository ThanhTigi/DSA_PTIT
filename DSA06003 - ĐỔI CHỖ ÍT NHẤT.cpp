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
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 0; i < n; ++i) 
        {
            int k = i;
            for (int j = i + 1; j < n; ++j) 
            {
                if (a[j] < a[k]) k = j;
            }
            if (k != i) 
            {
                ans++;
                swap(a[i], a[k]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
