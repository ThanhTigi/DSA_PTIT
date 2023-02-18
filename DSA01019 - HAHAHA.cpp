// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;
int n;
char a[20];
int dem8,dem6;
void Try(int m)
{
    if (m==n-1) 
    {
        for (int i=0; i<n-1; i++)
        {
            cout << a[i];
        }
        cout << "A" << endl;
        return;
    }
    for (int i=8; i>=6; i-=2)
    {
        if (i==6 && dem6 < 1) 
        {
            a[m] = 'H';
            dem6++;
            Try(m+1);
            dem6--;
        } 
        else if (i == 8)
        {
            a[m] = 'A';
            int temp = dem6;
            dem6=0;
            Try(m+1);
            dem6=temp;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        dem6=1;
        a[0]='H';
        Try(1);
    }
    return 0;
}