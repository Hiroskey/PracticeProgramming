#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> s(3);
    vector<int> e(3);
    int sum=0;
    for (int i=0; i<3; i++){
        cin >> s[i];
        cin >> e[i];
        sum += s[i]*0.1*e[i];
    }

    cout << sum << endl;
    return 0;
}