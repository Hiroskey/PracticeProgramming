#include<iostream>
#include<bits/stdc++.h>

using namespace std;

using ll = long long;

struct UnionFindTree{
    vector<int> parent;
    
    // 
    UnionFindTree(int N){
        parent = vector<int>(N);
        for(int i=0; i<N; i++) parent[i]=i;
    }

    // Recursively exploring the root of x
    int root(int x){
        if(parent[x] == x) return x;
        else return parent[x] = root(parent[x]);
    }

    // If x and y share with the same root, return TRUE
    bool same(int x, int y){
        x = root(x);
        y = root(y);
        return (x==y);
    }

    void unite(int x, int y){
        x = root(x);
        y = root(y);
        parent[x] = y;
    }
};

int main(){
    int n,m;
    cin >> n >> m;
    vector<ll> a(n+1), b(n+1);
    UnionFindTree data(n+1);

    vector<ll> beforesum(n+1, 0), aftersum(n+1, 0);
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) cin >> b[i];

    for(int i=0; i<m; i++){
        int c, d;
        cin >> c >> d;
        data.unite(c, d);
    }

    for(int i=1; i<=n; i++){
        beforesum[data.root(i)] += a[i];
        aftersum[data.root(i)]  += b[i];
    }

    string ans = "Yes";

    for(int i=1; i<=n; i++){
        if(beforesum[i] != aftersum[i]) ans = "No";
    }

    cout << ans << endl;
    return 0;
}