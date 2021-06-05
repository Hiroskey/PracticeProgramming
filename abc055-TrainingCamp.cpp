#include<bits/stdc++.h>

using namespace std;

const int  MOD = 1e9 + 7;

int main(){
    long long  N;
    cin >> N;
    long long sum=1;
    for(int i=1; i<=N; i++){
        sum = sum * i % MOD;
    }
    cout << sum << endl;
    return 0;    
}