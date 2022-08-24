#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve()
{
    long double PI=acos(-1.0);
    long double R;
    cin>>R;
    cout<<fixed<<setprecision(9);
    cout<<"area of the circle with radius "<<R<<" will be "<<PI*R*R;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}