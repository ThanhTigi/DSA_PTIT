// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
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
        int i = n-1;
        while (i>0 && a[i-1] >= a[i]) i--;
        i--;
        if (i==-1)
        {
            for (int i=1; i<=n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            int k= n-1;
            while (a[k] < a[i]) k--;
            swap(a[i],a[k]);
            int l= i+1,r=n-1;
            while (l<r)
            {
                swap(a[l],a[r]);
                l++;
                r--;
            }
            for (int i=0; i<n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
