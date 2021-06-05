#include<bits/stdc++.h>

using namespace std;


long long n, k;
vector<vector<long long>> T;



int rec(long long dist=0, int last=0, int visited=(1<<0)){
    //visitedが1111111ならば (全てのノードを訪問済みならば)
    if(visited == (1<<n)-1){
        //その時点での距離をdistへ書き込み
        dist += T[last][0];
        if(dist==k) return 1;
        else        return 0; 
    }

    int res=0;
    for(int v=1; v<n; v++){
        //そのビットが訪問済ならば終了
        if(visited & (1<<v)) continue;
        res += rec(dist+T[last][v], v, visited|(1<<v));
    }

    return res;
}



int main(){
    cin >> n >> k;
    T.assign(n, vector<long long>(n,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)  cin >> T[i][j];
    }
    cout << rec() << endl;    
}
