#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string S;
    cin >> S;
    int ans=0;
    for (int i=0; i<S.size(); i++){
        if(S.at(i) == '1'){
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}