#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve()
{
    vector<int> arr;
    arr.resize(6);
    arr.assign(3, 1);
    arr.resize(10);
    arr.push_back(5);
    arr.back();
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    cout << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t ;
    cin>>t ;
    while( t-- > 0 )
    {
       solve();
    }
}