// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin,s);
        int i = s.size() - 1;
        while (i >= 0 && s[i] == '1')
        {
            i--;
        }
        if (i>=0) s[i] = '1';
        for (int j=i+1; j<s.size(); j++)
        {
            s[j] = '0';
        }
        cout << s << endl;
    }
    return 0;
}
