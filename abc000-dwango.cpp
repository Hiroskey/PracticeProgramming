#include<bits/stdc++.h>

using namespace std;

int main(){
    int N; cin >> N;
    vector<string> s(N);
    vector<int> t(N);
    for(int i=0; i<N; i++){
        cin >> s[i] >> t[i];
    }
    string X; cin >> X;

    //linear search
    int sum=0;
    for(int i=0; i<N; i++){
        if(s[i] == X){
            for(int j=i+1; j<N; j++){
                sum += t[j];
            }
            cout << sum << endl;
            return 0;
        }
    }
    return 0;
}