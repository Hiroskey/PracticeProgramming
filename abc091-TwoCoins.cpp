#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    if(A + B >= C){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}