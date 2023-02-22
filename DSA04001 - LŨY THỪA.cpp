// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;
const long long modl = 1e9+7;

long long powod(long long n, long long k)
{
    if (k==0) return 1;
    if (k==1) return n;
    long long x = powod(n,k/2) % modl;
    if (k%2==1) return ((x * x) % modl)*n%modl;
    return  (x*x) % modl;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n,k;
        cin >> n >> k;
        cout << powod(n,k) % modl << endl;
    }
    return 0;
}