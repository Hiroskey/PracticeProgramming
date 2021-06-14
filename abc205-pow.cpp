#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    if(a == b || abs(a)==b || abs(b)== a){
        if(a==b){
            cout << "=" << endl;
            return 0;
        }
        if(c%2==0){
            cout << "=" << endl;
            return 0;
        }else{
            if(a>b){
                cout << ">" << endl;
            }else{
                cout << "<" << endl;
            }
            return 0;
        }
    }else{
        if(a>b && a > abs(b)){
            cout << ">" << endl;
            return 0;
        }else if(a>b && a < abs(b)){
            if(c%2==0){
                cout << "<" << endl;
            }else{
                cout << ">" << endl;
            }
            return 0;
        }else if(a<b && b > abs(a)){
            cout << "<" << endl;
            return 0;
        }else if(a<b && b < abs(a)){
            if(c%2==0){
                cout << ">" << endl;
            }else{
                cout << "<" << endl;
            }
            return 0;
        }
    }
}