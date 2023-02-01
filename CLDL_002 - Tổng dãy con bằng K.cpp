// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

vector<int> a, b;
int n, k, ans;

void solve() {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i] * b[i];
    }
    if (sum == k) {
        ans++;
        for (int i = 0; i < n; ++i) {
            if (b[i]) cout << a[i] << " ";
        }
        cout << endl;
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        b[i] = j;
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

int main() 
{
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    for (int &i : a) cin >> i;
    Try(0);
    cout << ans;
    cout << endl;
    return 0;
}
