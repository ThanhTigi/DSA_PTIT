// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;
int n;
int a[20];
int dem8,dem6;
void Try(int m)
{
    if (m==n-1) 
    {
        for (int i=0; i<n-1; i++)
        {
            cout << a[i];
        }
        cout << "6" << endl;
        return;
    }
    for (int i=6; i<=8; i+=2)
    {
        if (i==6 && dem6 < 3) 
        {
            if (dem6 == 2  && m == n-2) continue;
            a[m] = i;
            dem6++;
            int temp = dem8;
            dem8=0;
            Try(m+1);
            dem6--;
            dem8=temp;
        } 
        else if (i==8 && dem8 < 1)
        {
            a[m] = i;
            dem8++;
            int temp = dem6;
            dem6=0;
            Try(m+1);
            dem8--;
            dem6=temp;
        }
    }
}
int main()
{
    cin >> n;
    a[0]=8;
    dem8=1;
    dem6=0;
    Try(1);
    return 0;
}