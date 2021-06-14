#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    while(s.size()!=0){
        s.pop_back();
        s.pop_back();
        if(s.substr(0,(s.size()/2)) == s.substr(s.size()/2, s.size())){
            cout << s.size() << endl;
            return 0;
        }
    }
}