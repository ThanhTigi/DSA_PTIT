// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;
int n;
int a[10000];
void Try(int m)
{
    while(1)
    {
        for (int i=0; i<n; i++)
        {
            cout << a[i];
        }
        cout << " ";
    
        int i=n-1; 
        while (i>0 && a[i] < a[i-1]) i--;
        i--;
        if (i<0) return;
        int j=n-1;
        while (a[j] < a[i]) j--;
        swap(a[i],a[j]);
        int l=i+1, r = n-1;
        while (l<r)
        {
            swap(a[l],a[r]);
            l++;
            r--;
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
        for (int i=0; i<n; i++)
        {
            a[i] = i+1;
        }
        Try(1);
        cout << endl;
    }
    return 0;
}