// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) 
    {
        long long n,k;
        cin >> n >> k;
        long long a[n];
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        long long dem = 0;
        if (n>3)
        {
            if (a[n-1] + a[n-2] + a[n-3] >= k)
            {
                for (int i=n-1; i>1; i--)
                {
                    for (int j=i-1; j>0; j--)
                    {
                        if (binary_search(a,a+j,k-a[i]-a[j]))
                        {
                            dem++;
                            break;
                        }
                    }
                }
            }
        }
        if (dem == 0) cout << "NO\n"; else cout << "YES\n";
        
    }
    return 0;
}