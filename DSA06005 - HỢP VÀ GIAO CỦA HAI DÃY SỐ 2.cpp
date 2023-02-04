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
        int a[n],b[m];
        set<int> hop;
        set<int> giao;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            hop.insert(a[i]);
        }
        int k = hop.size();
        for (int i=0; i<m; i++)
        {
            cin >> b[i];
            hop.insert(b[i]);
            if (hop.size() != k)
            {
                k = hop.size();
            } 
            else
            {
                giao.insert(b[i]);
            }
        }
        for (auto x : hop)
        {
            cout << x << " ";
        }
        cout << endl;
        for (auto x : giao)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
