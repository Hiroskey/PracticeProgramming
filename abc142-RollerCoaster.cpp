#include<bits/stdc++.h>

using namespace std;

int main(){
    //input
    int N, K;
    cin >> N >> K;
    vector<int> h(N);
    int sum=0;
    for(int i=0; i<N; i++){
        cin >> h[i];
        if(h[i] >= K) sum++;
    }

    cout << sum << endl;
    return 0;
}