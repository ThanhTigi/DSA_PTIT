// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n];
    map<int, int> mm;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for (int i=0; i<n; i++)
    {
        if (mm[a[i]] == 0)
        {
            cout << a[i] << " ";
        }
        mm[a[i]]++;
    }
    return 0;
}
