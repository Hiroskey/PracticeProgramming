#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    int thousand = N / 1000;
    int hundred = (N - thousand*1000) / 100;
    int ten = (N - thousand*1000 - hundred*100) / 10;
    int one = (N - thousand*1000 - hundred*100 - 10*ten);
    int ans=0;

    if(thousand == 2)
        ans++;
    if(hundred == 2)
        ans++;
    if(ten==2)
        ans++;
    if(one==2)
        ans++;
    
    cout << ans << endl;
    return 0;
}