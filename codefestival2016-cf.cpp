#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'C'){
            for(int j=i; j<s.length(); j++){
                if(s[j] == 'F'){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}