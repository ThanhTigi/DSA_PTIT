// DSA_PTIT By Thanh TiGi
#include<bits/stdc++.h>
using namespace std;
int n,k,dem;
int a[1000];
void Try(int m)
{
    if (m==n)
    {
        if (dem == k)
        {
            for (int i=0; i<n; i++)
            {
                cout << a[i];
            } 
            cout << endl;
        }
        return;
    }
    for (int i=0; i<2; i++)
    {
        a[m]=i;
        if (i==1) dem++;
        Try(m+1);
        if (i==1) dem--;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        dem = 0;
        for (int i=0; i<n; i++)
        {
            a[i] = 0;
        }
        Try(0);
    }
    return 0;
}