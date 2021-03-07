#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stdio.h>

using namespace std;

int main(){
    int N, X, ans;
    cin >> N >> X;
    
    for (int i=0; i<N; i++){
        cin >> ans;
        if(ans!=X)
            cout << ans << " ";
    }

    return 0;
}