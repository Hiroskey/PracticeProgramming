#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    int sum=0;
    for(int i=0; i<N; i++){
        cin >> A[i];
        if(A[i]%2!=0)  sum++;
    }
    if(N==1){
        cout << "YES" << endl;
        return 0;
    }
    if(sum%2==0){
        cout << "YES" << endl;
        return 0;
    }else
        cout << "NO" << endl;
    return 0;
}
