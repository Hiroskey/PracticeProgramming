#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int ans1 = 1e9, ans2 =1e9;
    ans1 = min(a,b);
    ans2 = min(max(a,b),c);

    cout << ans1 + ans2 << endl; 
    return 0;
}