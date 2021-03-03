#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<stdio.h>

using namespace std;

int main(){
    int N, X;
    vector<int> A(N);
    cin >> N >> X;
    for (int i=0; i<N; i++){
        cin >> A[i];
    }
    for (int i=0; i<A.size(); i++){
        if(A[i]==X)
            A.erase(A.begin()+i);
    }

    for (int i=0; i<A.size();i++){
        cout << A.at(i);
    }
    return 0;
}