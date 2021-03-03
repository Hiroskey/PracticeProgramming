#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    int ans=0;
    for (int i=1; i<N+1; i++){
        ans += 10000*i;
    }
    cout << ans / N << endl;
    return 0;
}