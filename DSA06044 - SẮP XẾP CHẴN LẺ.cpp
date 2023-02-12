// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> c,l;
    for (int i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            long long k;
            cin >> k;
            c.push_back(k);
        }
        else
        {
            long long k;
            cin >> k;
            l.push_back(k);
        }
    }
    sort(l.begin(),l.end());
    sort(c.begin(),c.end());
    for (int i=0; i<l.size(); i++)
    {
        cout << l[i] << " ";
        if (i<c.size()) cout << c[c.size()-1-i] << " ";
    }
    return 0;
}
