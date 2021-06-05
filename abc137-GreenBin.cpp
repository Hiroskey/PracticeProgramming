#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    ll n;
    cin >> n;
    vector<string> vec_s(n);
    map<string, ll> map_s;

    ll cnt=0;
    for(ll i=0; i<n; i++){
        cin >> vec_s[i];
        sort(vec_s[i].begin(), vec_s[i].end());
        map_s[vec_s[i]]++;
    }

    for(auto p : map_s){
        if(map_s[p.first] > 1){
            cnt += map_s[p.first] * (map_s[p.first]-1) / 2;
        }
    }
    cout << cnt << endl;
    return 0;
}