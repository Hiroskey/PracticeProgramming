#include<bits/stdc++.h>

using namespace std;

int main(){
    int H, N;
    cin >> H >> N;
    vector<int> A(N);
    int sum=0;
    for(int i=0; i<N; i++){
        cin >> A[i];
        sum+=A[i];
    }
    cout << (sum>=H?"Yes":"No") << endl;
    return 0;
}