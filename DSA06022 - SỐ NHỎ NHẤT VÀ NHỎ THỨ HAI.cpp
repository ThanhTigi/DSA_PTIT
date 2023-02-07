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
        set<int> s;
        for (int i=0; i<n; i++)
        {
            int k;
            cin >> k;
            s.insert(k);
        }
        if (s.size()<=1)
        {
            cout << "-1\n";
        }
        else
        {
            vector<int> a(s.begin(),s.end());
            cout << a[0] << " " << a[1] << endl;
        }
    }
}
