#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void solve()
{
   int a,b,c;
   cin>>a>>b>>c;
   if(a==-1||b==-1){
    cout<<"F"<<endl;
   }else if((a+b)>=80){
    cout<<"A"<<endl;
   }else if((a+b)>=65){
    cout<<"B"<<endl;
   }else if((a+b)>=50){
    cout<<"C"<<endl;
   }
   else if((a+b)>=30){
    if(c>=50){
        cout<<"C"<<endl;
    }
    else{
        cout<<"D"<<endl;
    }
   }else{
    cout<<"F"<<endl;
   }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t ; 
    cin>>t ; 
    while( t--)
    {
        solve() ;
    }
}