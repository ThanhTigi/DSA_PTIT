// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int,int> mapp;
        for (int i=0; i<n; i++)
        {
            int k;
            cin >> k;
            mapp[k]++;
        } 
        vector<pair<int,int>> a(mapp.begin(),mapp.end());
        sort(a.begin(),a.end(),cmp);
        for (auto x : a)
        {
            for (int i=0; i<x.second; i++)
            {
                cout << x. first << " ";
            }
        }
        cout << endl;
    }
}
