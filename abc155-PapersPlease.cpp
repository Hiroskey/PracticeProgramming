#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i <N; i++){
        cin >> A.at(i);
    }
    bool flag=false;
    for (int i=0; i<N; i++){
        if(A.at(i)%2 == 0){
            if(A.at(i)%3 == 0 || A.at(i)%5 == 0){
                flag=true;
            }else{
                flag=false;
                cout << "DENIED" << endl;
                return 0;
            }
        }
    }
    
    cout << "APPROVED" << endl;
    return 0;
}