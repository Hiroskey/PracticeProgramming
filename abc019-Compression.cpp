#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    int n=0;
    for (int i=0; i<s.size()-1; i++){
        n++;
        if(s.at(i) != s.at(i+1)){
            cout << s.at(i) << n;
            n=0;
        }
    }
    n++;
    cout << s.at(s.size()-1) << n << endl;
    return 0;
}