#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b, n;
    cin >> a >> b >> n;
    // under period: n, over period: b-1;
    ll x = min(n, b-1);
    cout << (a*x)/b - a*(x/b) << endl;
}