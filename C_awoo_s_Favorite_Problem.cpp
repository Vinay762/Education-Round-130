#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
//#define pb push_back;

bool solve()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    // we have observe that only b is moving so the relative position
    // of both a and c must be the same
    string s2 = "", t2 = "";
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] != 'b')
            s2.push_back(s[i]);
        if (t[i] != 'b')
            t2.push_back(t[i]);
    }

    // check if relative positions of a and c are same
    if (s2 != t2)
        return false;

    vector<ll> s_cidx, t_cidx;
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == 'c')
            s_cidx.push_back(i);
        if (t[i] == 'c')
            t_cidx.push_back(i);
    }

    for (ll i = 0; i < s_cidx.size(); ++i)
        if (s_cidx[i] < t_cidx[i])
            return false;

    vector<ll> s_aidx, t_aidx;
    for (ll i = 0; i < n; ++i)
    {
        if (s[i] == 'a')
            s_aidx.push_back(i);
        if (t[i] == 'a')
            t_aidx.push_back(i);
    }

    for (ll i = 0; i < s_aidx.size(); ++i)
        if (s_aidx[i] > t_aidx[i])
            return false;

    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t-- > 0)
    {
        if (solve())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}