#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<char> r(N);
    double sum=0;
    for(int i=0; i<N; i++){
        cin >> r[i];
        if(r[i] == 'A') sum += 4;
        if(r[i] == 'B') sum += 3;
        if(r[i] == 'C') sum += 2;
        if(r[i] == 'D') sum += 1;
    }
    cout << fixed << setprecision(15) << sum / N << endl;
    return 0;    
}