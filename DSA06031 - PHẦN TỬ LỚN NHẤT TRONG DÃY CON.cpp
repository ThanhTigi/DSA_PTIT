// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &i : a) cin >> i;
        deque<int> dq;
        for (int i = 0; i < n; ++i) 
        {
            if (dq.front() == i - k) dq.pop_front();
            while (!dq.empty() && a[dq.back()] <= a[i]) dq.pop_back();
            dq.push_back(i);
            if (i + 1 >= k) cout << a[dq.front()] << " ";
        }
        cout << endl;
    }
    return 0;

}
