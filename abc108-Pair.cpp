#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int K;
    cin >> K;
    int even = K / 2;
    int odd = K - even;
    if(odd > 1 and even > 1){
        cout << K*(K-1)/2 - odd*(odd-1)/2 - even*(even-1)/2 << endl;
    }else if(even==1 and odd > 1){
        cout << (K*(K-1))/2 - 1 << endl;
    }else if(even == 1 and odd == 1){
        cout << K*(K-1)/2 << endl;
    }

    return 0;
}