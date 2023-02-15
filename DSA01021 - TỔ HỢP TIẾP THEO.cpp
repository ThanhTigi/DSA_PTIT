// DSA_PTIT By Thanh TiGi
#include<bits/stdc++.h>
using namespace std;
int n,k;
map<int,int> mp;
void Sinh(int a[])
{
    int i=k-1;
    while (i>=0 && a[i] >= n-k+i+1) i--;
    if (i<0)
    {
        cout << k;
    }
    else
    {
        int dem = 0;
        a[i]++;
        for (int j=i+1; j<k; j++)
        {
            a[j] = a[j-1] + 1;
        }
        for (int j=0; j<k; j++)
        {
            mp[a[j]]++;
        }
        for (auto x : mp)
        {
            if (x.second >= 2)
            {
                dem++;
            }
        }
        cout << k - dem;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n];
        mp.clear();
        for (int i=0; i<k; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        Sinh(a);
        cout << endl;
    }
    return 0;
}