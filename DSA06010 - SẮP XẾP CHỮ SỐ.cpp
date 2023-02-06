// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        getchar();
        getline(cin,s);
        set<char> a;
        for (auto x : s)
        {
            if (x <='9' && x >='0')
            {
                a.insert(x);
            }
        }
        for (auto x : a)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
