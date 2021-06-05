#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int sum=t;
    for(int i=n-1; i>0; i--){
        sum += min(a[i]-a[i-1], t);
    }
    cout << sum << endl;
    return 0;
}