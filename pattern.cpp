#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve()
{
    int n, m;
        cin >> n >> m;
        for (int i = 0; i < 3*n+1; ++i) {
            for (int j = 0; j < 3*m + 1; ++j) {
                if(i%3==0 || j%3 == 0) cout << "*";
                else cout << ".";
            }
            cout << "\n";}
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
        solve() ;
    }
}