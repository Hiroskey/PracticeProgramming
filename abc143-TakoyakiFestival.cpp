#include <iostream>
#include<vector>
using namespace std;


int main() {
    int N;
    cin >> N;
    vector<long long> d(N);
    for (int i=0; i<N; i++){
        cin >> d.at(i);
    }
    long long res = 0;
    long long tmp;

    for (int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            tmp = d.at(i) * d.at(j);
            res += tmp;
        }
    }
    cout << res << endl;
}