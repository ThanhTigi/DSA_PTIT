// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;
string s;
char a[10000];
char b[10000];
int check[10000];

void Try(int m)
{
    if (m==s.length())
    {
        for (int i=0; i<s.length(); i++)
        {
            cout << b[i];
        }
        cout << " ";
        return;
    }
    for (int i=0; i<s.length(); i++)
    {
        if (check[i] == 0)
        {
            b[m] = a[i];
            check[i] = 1;
            Try(m+1);
            check[i] = 0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        getline(cin,s);
        for (int i=0; i<s.length(); i++)
        {
            a[i] = s[i];
            check[i]=0;
        }
        sort(a,a+s.length());
        Try(0);
        cout << endl;
    }
    return 0;
}