// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;
int n,k;
string a;
void Try(int m)
{
        int i=n-1; 
        while (i>0 && a[i] <= a[i-1]) i--;
        i--;
        if (i<0) 
        {
            cout << k << " BIGGEST";
            return;
        }
        for (int j = a.length() - 1; j > i; --j) 
        {
            if (a[j] > a[i]) 
            {
                swap(a[i], a[j]);
                sort(a.begin() + i + 1, a.end());
                break;
            }
        }   
        cout << k << " " << a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k;
        cin >> a;
        n=a.length();
        Try(1);
        cout << endl;
    }
    return 0;
}