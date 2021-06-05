#include<bits/stdc++.h>
#include<algorithm>

using namespace std;


int main(){
    int n, cnt_p=0, num_p=0, cnt_q=0, num_q=0;
    cin >> n;
    vector<int> p(n), q(n), r(n);
    for(int i=0; i<n; i++) r[i]=i+1;
    for(int i=0; i<n; i++) cin >> p[i];
    for(int i=0; i<n; i++) cin >> q[i];

    do{
        if (p == r) num_p = cnt_p;
        else ++cnt_p;
        if(q == r) num_q = cnt_q;
        else cnt_q++;
    }while(next_permutation(r.begin(), r.end()));

    cout << abs(num_q - num_p) << endl;
    return 0;    
}