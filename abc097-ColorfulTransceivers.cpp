#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stdio.h>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(abs(a-c) <= d){
        cout << "Yes" << endl;
        return 0;
    }else{
        if(abs(a-b)<=d and abs(b-c)<=d){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        return 0;
    }
    return 0;
}