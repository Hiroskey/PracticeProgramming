#include<bits/stdc++.h>

using namespace std;


//解法: 二分探索
int main(){
    long long A, B, X;
    cin >> A >> B >> X;
    
    //左端、右端を決める
    long long left=0, right =1000000001;
    //探索位置の初期化
    long long N=0;

    //例外処理
    if( X >= (A*1000000000)+(B*10)){
        cout << 1000000000 << endl;
        return 0;
    }
    

    while(left+1 < right){
        N = (left+right)/2;
        long long length = to_string(N).length();
        if(X >= A*N+B*length){
            left = N;
        }else{
            right = N;
        }
    }

    cout << left << endl;
    return 0;
}