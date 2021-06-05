#include<bits/stdc++.h>
#include<algorithm>

using namespace std;


int main(){
    int n;
    string s, t;
    cin >> n >> s >> t;

    for (int i=0; i<n; i++){
        cout << t[n-i-1] << endl;
    }
    return 0;
}