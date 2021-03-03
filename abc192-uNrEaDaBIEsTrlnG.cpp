#include<iostream>
#include<string>

using namespace std;

int main(){
    string S;
    cin >> S;

    bool odd = false;
    bool even = false;

    for (int i=0; i<=S.size()-1; i=i+2){
        if(islower(S[i])){
            odd = true;
        }else{
            cout << "No";
            return 0;
        }
    }
    
    for (int j=1; j<=S.size()-1; j=j+2){
        if(isupper(S[j])){
            even = true;
        }else{
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

    return 0;
}