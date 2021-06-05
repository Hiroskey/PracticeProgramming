#include<iostream>
#include<bits/stdc++.h>
#define al(a) a.begin(), a.end()

using namespace std;
using ll = long long;

int main()
{
 
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i] >> b[i];
    }
    reverse(al(a));
    reverse(al(b));
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ll tmp = (ans + a[i]) % b[i];
        if (tmp != 0)
            ans += b[i] - tmp;
    }
    cout << ans << endl;
    return 0;
}