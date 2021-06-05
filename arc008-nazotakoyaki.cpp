#include<bits/stdc++.h>
using namespace std ;
 
 
int main(){
    int n, m; 
    cin >> n >> m; 
    string name , kit;
    cin >> name >> kit;
    
    map<char ,int> mp_name;
    for(int i=0; i<n; i++) mp_name[name[i]]++;
    map<char, int> mp_kit;
    for(int i=0; i<m; i++) mp_kit[kit[i]]++;
 
    int ans=0 ;
    for(auto p : mp_name){     
        if(mp_kit[p.first] == 0){
            cout << -1 << endl;
            return 0 ;
        }
        else{
            ans = max(ans , (p.second + mp_kit[p.first] - 1)/mp_kit[p.first]) ;
        }
    }
 
    cout << ans << endl;
}