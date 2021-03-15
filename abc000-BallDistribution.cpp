#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;
int main(){
    int N, K;
    cin >> N >> K;
    if(K==1){
        cout << 0 <<endl;
        return 0;
    }
    cout << N-K << endl;
    return 0;
}