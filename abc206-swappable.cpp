#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
    cin >> n;
    vector<long long int> a(n);
    map<int, int> mp;
    long int sum=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum+=i;
        mp[a[i]]+=1;
    }
    for(auto x : mp){
        sum -= mp[x.first]-1;      
    }

    cout << sum << endl;
}