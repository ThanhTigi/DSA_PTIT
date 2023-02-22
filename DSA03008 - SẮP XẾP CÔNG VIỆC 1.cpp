// DSA_PTIT By Thanh TiGi
#include<bits/stdc++.h>
using namespace std;
struct cv
{
    int bg;
    int ed;
};
bool cmp(cv a, cv b)
{
    if (a.ed == b.ed) return a.bg < b.bg;
    return a.ed < b.ed;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cv congviec[n];
        for (int i=0; i<n; i++)
        {
            cin >> congviec[i].bg;
        }
        for (int i=0; i<n; i++)
        {
            cin >> congviec[i].ed;
        }
        sort(congviec,congviec + n,cmp);
        int k=1,i=0;
        for (int j=1; j<n; j++)
        {
            if (congviec[j].bg >= congviec[i].ed)
            {
                k++;
                i=j;
            }
        }
        cout << k << endl;
    }
    return 0;
}