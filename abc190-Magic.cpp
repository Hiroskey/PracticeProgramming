#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N, S, D;
    cin >> N >> S >> D;

    vector<vector<long int>> magic(N,vector<long int>(2));
    for (int i=0; i<N; i++){
        cin >> magic.at(i).at(0);
        cin >> magic.at(i).at(1);
    }

    for (int i=0; i<N; i++){
        if(magic.at(i).at(0) < S && magic.at(i).at(1) > D){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}