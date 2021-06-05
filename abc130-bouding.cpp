#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> l(n);

    int pos=0;
    int cnt=1;  
    for(int i=0; i<n; i++){
        cin >> l[i];
        pos = pos + l[i];
        if(pos <= x) cnt++;
    }
    cout << cnt << endl;
    return 0;
}