#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        ans ^= x;
       // cout<<ans<<endl;
    }
    cout << ans << "\n";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
}