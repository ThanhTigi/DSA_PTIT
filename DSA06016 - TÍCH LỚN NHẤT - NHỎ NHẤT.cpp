// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int &i : a) cin >> i;
        for (int &i : b) cin >> i;
        cout << (long long) *max_element(a.begin(), a.end()) * *min_element(b.begin(), b.end()) << endl;
    }
}