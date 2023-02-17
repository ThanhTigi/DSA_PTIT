// DSA_PTIT By Thanh TiGi
#include <bits/stdc++.h>
using namespace std;
set<string> ten;
set<string> kq;
string a[100];
int n,k;
void Try(int i,int vt,vector<string> name)
{
    if (i == k)
    {
        string cc;
        for (int j=0; j<k; j++)
        {
            cc+=a[j] + " ";
        }
        kq.insert(cc);
        return;
    }
    for (int j=vt; j<name.size(); j++)
    {
        a[i] = name[j];
        Try(i+1,j+1,name);
    }
}
int main() 
{
    long long t = 1;
    while (t--) 
    {
        cin >> n >> k;
        getchar();
        string s;
        getline(cin,s);
        stringstream ss(s);
        string temp;
        while (ss >> temp)
        {
            ten.insert(temp);
        }
        vector<string> name(ten.begin(),ten.end());
        Try(0,0,name);
        for (auto x : kq)
        {
            cout << x << endl;
        }
    }
    return 0;
}