// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
    if (n < 2) return 0;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i==0) return 0;
    }
    return 1;
}

void FindSum(int n)
{
    for (int i=2; i<=n/2; i++)
    {
        if (check(i))
        {
            if (check(n-i)) 
            {
                cout << i << " " << n-i << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        FindSum(n);
    }
    return 0;
}
