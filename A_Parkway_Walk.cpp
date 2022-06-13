#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    vector<ll> a(n);
    ll s = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    cout << max(s - m, 0ll) << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}