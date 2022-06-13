#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

void solve()
{
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    // for(ll i = 0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    vector<ll> prefix(n);
    prefix[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    while (q--)
    {
        ll r, l;
        cin >> r >> l;
        r--, l--;
        l = r - l;
        ll s = prefix[r];
        if (l > 0)
            s -= prefix[l - 1];
        cout << s << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t = 1;
    // cin >> t;
    while (t-- > 0)
    {
        solve();
    }
    return 0;
}