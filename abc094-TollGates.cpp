#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, M, X;
    cin >> N >> M >> X;
    vector<int> a(M);
    for (int i=0; i<M; i++){
        cin >> a[i];
    }

    int right=0, left=0;
    for(int i=0; i<M; i++){
        if(X < a[i]){
            right++;
        }else{
            left++;
        }
    }

    if(right > left){
        cout << left << endl;
    }else{
        cout << right << endl;
    }
    return 0;
}