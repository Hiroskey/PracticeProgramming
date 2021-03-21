#include<bits/stdc++.h>

using namespace std;


int main(){
  uint64_t N, A, B;
  cin >> N >> A >> B;

  if(B<A){
      cout << 0 << endl;
      return 0;
  }

  if(N==1){
      if(B==A) cout << 1 << endl;
      else     cout << 0 << endl;
      return 0;
  }
  cout << ((N-1)*B + A)  - ((N-1)*A + B) + 1 << endl;
  return 0;
}