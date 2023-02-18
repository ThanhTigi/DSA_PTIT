// DSA_PTIT By Thanh TiGi
#include<bits/stdc++.h>
using namespace std;
int n;
char a[1000];
void Try(int m)
{
    if (m==n)
    {
        for (int i=0; i<n; i++)
        {
            cout << a[i];
        } cout << " ";
        return;
    }
    for (char i ='A'; i<='B'; i++)
    {
        a[m]=i;
        Try(m+1);
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
            a[i] = 'A';
        }
        Try(0);
        cout << endl;
    }
    return 0;
}