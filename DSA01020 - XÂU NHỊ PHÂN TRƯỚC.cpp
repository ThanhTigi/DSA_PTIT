// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;
int n;
string a;
void TimKiem()
{
    int i=a.length()-1;
    while (i >= 0 && a[i] == '0') i--;
    if (i == -1)
    {
        for (int i=0; i<a.length(); i++)
        {
            cout << "1";
        }
        cout << endl;
    }
    else
    {
        a[i] = '0';
        i++;
        while (i<a.length())
        {
            a[i] = '1';
            i++;
        }
        cout << a << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        getline(cin,a);
        TimKiem();
    }
    return 0;
}