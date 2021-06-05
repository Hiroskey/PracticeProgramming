#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    int mod = 1000000007;
    
    ll sum=0;
    for(int i=0;i <n; i++){
        cin >> a[i];
        sum += a[i];
        sum %=mod;
    }

    ll ans=0;
    for(int i=0; i<n; i++){
        sum -= a[i];
        if(sum<0) sum += mod;
        ans += a[i]*sum;
        ans %= mod;
    }

    cout << ans << endl;
}