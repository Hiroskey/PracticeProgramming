#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> n(4);
    for (int i=0; i<4; i++){
        cin >> n[i];
    }
    sort(n.begin(), n.end());
    
    if (n.at(0)==1 and n.at(1)==4 and n.at(2)==7 and n.at(3)==9)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}