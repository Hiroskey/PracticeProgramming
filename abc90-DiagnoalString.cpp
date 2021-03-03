#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<string> c(3);
    
    for (int i=0; i<3; i++){
        cin >> c[i];
    }
    for (int i=0; i<3; i++){
        cout << c[i].at(i);
    }
    return 0;
}