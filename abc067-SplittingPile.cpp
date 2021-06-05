#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
 
int main(){
  long long x = 0, y = 0, min;
  int n;
  cin >> n;
  vector<long long> v(n);
  for (int i = 0; i < n; i++){
    cin >> v.at(i);
    y += v.at(i);
  }
  for (int i = 0; i < n - 1; i++){
    x += v.at(i);
    y -= v.at(i);
    if (i == 0) min = abs(x - y);
    else if (abs(x - y) < min) min = abs(x - y);
  }
  cout << min << endl;
 
  return 0;
}
/*
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    long int minimize=2e5;
    
    long int x = 0;
    long int y = 0;
    for(int i=0; i<n; i++){
        y+=a[i];
    }
    for(int i=0; i<n-1; i++){
        x += a[i];
        y -= a[i];
        minimize = min(abs(x-y), minimize);
    }
    cout << minimize << endl;
    return 0;
}
*/