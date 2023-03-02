// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long n,k;
struct matran
{
    long long f[15][15];
};
matran operator*(matran a, matran b)
{
    matran C;
    for (long long i=0; i<n; i++)
    {
        for (long long j=0; j<n; j++)
        {
            C.f[i][j] = 0;
            for (long long k=0; k<n; k ++)
            {
                C.f[i][j] = (C.f[i][j] + a.f[i][k]*b.f[k][j])%mod;
            }
        }
    }
    return C;
}

matran powMod(matran a, long long k)
{
    if (k==1) return a;
    matran x = powMod(a,k/2);
    if (k%2==1) return x*x*a;
    return x*x;
}
int main() 
{
    long long t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        matran a;
        for (long long i=0; i<n; i++)
        {
            for (long long j=0; j<n; j++)
            {
                cin >> a.f[i][j];
            }
        }
        matran kq = powMod(a,k);
        long long temp =0;
        for (long long i=0; i<n; i++)
        {
            temp =(temp + kq.f[i][n-1]) %mod;
        }
        cout << temp << endl;
    }
    return 0;
}