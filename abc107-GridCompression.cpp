#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
 
int main() {
  int h, w; cin >> h >> w;
  vector<string> a(h);
  for (int i = 0; i < h; i++) cin >> a.at(i);
  
  vector<bool> row(h, false);
  vector<bool> col(w, false);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (a.at(i).at(j) == '#') {
        row.at(i) = true;
        col.at(j) = true;
      }
    }
  }
  
  for (int i = 0; i < h; i++) {
    if (row.at(i)) {
      for (int j = 0; j < w; j++) {
        if (col.at(j)) {
          cout << a.at(i).at(j);
        }
      }
      cout << endl;
    }
  }
  
}