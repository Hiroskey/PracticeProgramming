#include <iostream>
using namespace std;

long long N;

long long calc(int N) {
    int res = 0;
    while (N > 0) {
        res += N % 10;
        N /= 10;
    }
    return res;
}

int main() {
    cin >> N;
    //十分に大きな値で初期化: res
    long long res = 1LL<<60;
    //A=1の場合から順に各桁の和を計算
    for (long long A = 1; A < N; ++A) {
        //必然的にB=N-A
        long long B = N - A;
        //各桁の和を計算する関数に投げる
        long long tmp = calc(A) + calc(B);
        //最小値を更新
        res = min(res, tmp);
    }
    cout << res << endl;
}