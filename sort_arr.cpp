#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve()
{
    int  n ; 
    cin >> n ; 
    vector<int> arr(n) ; 
    for( int i = 0 ;  i < n ; i++ )cin>>arr[i] ;
    sort( arr.begin() , arr.end()) ; 
    for( auto it : arr ) cout<<it<< " " ; 
    cout<<endl ;
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