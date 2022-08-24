#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve()
{
    string n;
    int sum=0;
    getline(cin,n);
    for(int i=0;i<n.length();i++)
    {
        sum+=(n[i]-'0');
    }
    cout<<sum<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    string temp;
    getline(cin, temp);
    while (t-- > 0)
    {
        solve();
    }
}