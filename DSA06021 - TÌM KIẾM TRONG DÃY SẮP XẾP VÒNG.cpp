// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int vt = 0;
        for (int i=0; i<n; i++)
        {
            int temp;
            cin >> temp;
            if (k==temp) vt = i+1;
        } 
        cout << vt << endl;
    }
}
