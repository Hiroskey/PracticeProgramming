/*

*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    long long K, A, B;
    cin >> K >> A >> B;

    if(B-A<3 || K<A+1){
        cout << 1+K << endl;
        return 0;
    }
    if(((K-A+1)%2)==0){
        cout << ((K-A+1)/2)*(B-A)+A << endl;
    }else{
        cout << ((K-A+1)/2)*(B-A)+A+1 << endl;
    }
    return 0;
}