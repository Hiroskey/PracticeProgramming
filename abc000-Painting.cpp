#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int H, W, N;
    cin >> H >> W >> N;
    int ans=0;
    ans = (N + (max(W,H)-1))/max(W,H);
    cout << ans << endl;
}