// DSA_PTIT By Thanh TiGi
#include<bits/stdc++.h>
using namespace std;

inline int merge(int *a, int *b, int l, int r, int mid)
{
    int i = l, j = i, k = mid;
    int res = 0;
    while(i <= mid - 1 and k <= r)
    {
        if(a[i] <= a[k]) b[j++] = a[i++];
        else
        {
            b[j++] = a[k++];
            res += mid - i;
        }
    }
    while(i <= mid - 1) b[j++] = a[i++];
    while(k <= r) b[j++] = a[k++];
    for(i = l; i <= r; ++i) a[i] = b[i];
    return res;
}

inline int Sort(int *a, int *b, int l, int r)
{
    int mid, res = 0;
    if(l < r)
    {
        mid = (l + r) >> 1;
        res += Sort(a, b, l, mid);
        res += Sort(a, b, mid + 1, r);
        res += merge(a, b, l, r, mid + 1);
    }
    return res;
}

int main()
{
    
    int n;
    cin >> n;
    int a[n + 5], b[n + 5], c[n + 5];
    for (int i = 0; i < n; i++) cin >> a[i];
    int idx = 0;
    for (int i = 0; i < n; i++) if((a[i] & 1) ^ 1) c[idx++] = a[i];
    int res = Sort(c, b, 0, idx - 1);
    int cnt = 0;
    a[n] = 1;
    for (int i = 1; i <= n; i++)
    {
        if((a[i] & 1) ^ 1 and (a[i - 1] & 1) ^ 1) ++cnt;
        else if(a[i] & 1 and (a[i - 1] & 1) ^ 1)
        {
            res -= Sort(a, b, i - 1 - cnt, i - 1);
            cnt = 0;
        }
    }
    cout << res << endl;
    return 0;
}