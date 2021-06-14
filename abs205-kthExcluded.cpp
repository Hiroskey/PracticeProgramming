
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<long long> a(n);
    vector<long long> k(n);
    for(int i=0; i<n; i++) cin >> a[i]; 
    for(int i=0; i<n; i++) cin >> k[i];
    sort(a.begin(),a.end());
    vector<long long> cnt(n)
    int cnt;
    i=1;
    while(i <= a[n]){
        if(i != a[i]){
            cnt++;
            for(int j=0; j<q; j++){
                if(k[j] == cnt) cout << cnt << endl;
            }
        }
        i++;
    }
    
    

    for(int i=1; i<=n; i++){
        if(b[i] != 1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;


}