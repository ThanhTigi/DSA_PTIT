// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;
long long fibo[94];

void TimKiem(long long n, long long k)
{
    if (n==1) 
    {
        cout << "A";
    }
    else if (n==2)
    {
        cout << "B";
    }
    else
    {
        if (k <= fibo[n-2]) TimKiem(n-2, k);
        else TimKiem(n-1, k-fibo[n-2]);
    }

}
long long n,k;
int main()
{
    fibo[1] = 1;
    fibo[2] = 1;
    for (long long i=3; i<93; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    cout << endl;
    long long t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        TimKiem(n,k);
        cout << endl;
    }
        
}