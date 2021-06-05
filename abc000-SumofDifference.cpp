#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
  int N; cin >> N;
  ll ans = 0;
  vector<ll> A(N);
  for(int i=0; i<N; i++){
    cin >> A[i];
  }
  sort(A.begin(),A.end());
  ll ruisekiwa = 0;
  for(int i=N-1; i>0; i--){
    ruisekiwa += A[i];
    ans = ans + ruisekiwa - (N-i)*A[i-1];
  }
  cout << ans << endl;
}