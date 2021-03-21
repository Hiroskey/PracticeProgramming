#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> r(5);
    for(int i=0; i<5; i++) cin >> r[i];
    int k;
    cin >> k;

    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(r[j]-r[i]>k){
                cout << ":(" << endl;
                return 0;
            }
        }
    }
    cout << "Yay!" << endl;
    return 0;
}