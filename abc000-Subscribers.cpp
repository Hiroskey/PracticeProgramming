#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int ans1, ans2;

    ans1 = min(A, B);
    ans2 = ((A+B)>N?(A+B)-N:0);

    cout << ans1 << " " << ans2 << endl;
    return 0;
}
