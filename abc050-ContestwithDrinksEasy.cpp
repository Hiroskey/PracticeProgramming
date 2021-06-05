#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> T(n);
    for(int i=0; i<n; i++) cin >> T[i];
    int m;
    cin >> m;
    vector<int> p(m);
    vector<int> x(m);
    for(int i=0; i<m; i++){
        cin >> p[i];
        cin >> x[i];
    }

    //全体で要する時間
    int sum=0;
    for(int i=0; i<n; i++) sum += T[i];
    cout << "sum " << sum << endl;
    //それぞれのドリンクについて走査
    for(int i=0; i<m; i++){
        int tmp = sum;
        cout << "T: " << T[p[i]-1] << endl;
        cout << "X: " << x[p[i]-1] << endl;
        tmp = tmp -T[p[i]] + x[p[i]];
        cout << tmp << endl;
    }
}
