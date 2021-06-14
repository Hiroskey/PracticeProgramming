#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n+1, 0);
    for(int i=0; i<n; i++) {
        cin >> a[i];
        b[a[i]] += 1;
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