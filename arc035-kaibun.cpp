#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i=0; i<s.length()/2; i++){    
        if((s[i] != s[s.length()-i-1]) && (s[i]!='*' && s[s.length()-i-1]!='*')){
                cout << "NO" << endl;
                return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}