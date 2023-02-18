// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;
int n, k;
int kt[10000];
int a[10000];
void ThDq(int m,vector<int> b)
{
    if (m > k)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << b[a[i]-1] << " ";
        }
        cout << endl;
        return;
    }
        for (int i = a[m - 1] + 1; i <= n - k + m; i++)
        {
            a[m] = i;
            ThDq(m + 1,b);
        }
}
int main()
{
    int t;
    t = 1;
    while (t--)
    {
        cin >> n >> k;
        set<int> temp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            temp.insert(x);
        }
        n = temp.size();
        vector<int> b(temp.begin(), temp.end());
        memset(kt, 0, sizeof(kt));
        ThDq(1,b);
    }
    return 0;
}