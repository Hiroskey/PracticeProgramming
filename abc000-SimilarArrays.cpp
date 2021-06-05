#include<bits/stdc++.h>
#include<algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int total=1;
    for(int i=0; i<n; i++) total*=3;

    int cnt=1;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            cnt*=2;
        }
    }
    cout << total - cnt << endl;
    return 0;    
}