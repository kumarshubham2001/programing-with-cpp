#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void gtline()
{
    int n;
    cin >> n;
    string arr[n];
    string temp;
    getline(cin, temp);
    for (int i = 0; i < n; i++)
    {
        getline(cin, arr[i]);
    }
    for (int j = n - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    gtline();
}
