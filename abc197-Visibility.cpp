#include <bits/stdc++.h>
using ll=long long;
using namespace std;
 
int di[] ={-1,0,1,0};
int dj[] ={0,-1,0,1};
 
int main(){
    int h,w,x,y;
    cin>>h>>w>>x>>y;
    --x;
    --y;
    vector<string> s(h);
    for(int i=0;i<h;i++) cin>>s[i];
    
    int ans=1;
    for(int j=0;j<4;j++){
        int ni =x;
        int nj=y;
        while(1){
            ni+=di[j];
            nj+=dj[j];
        if(ni<0||nj<0||ni>=h||nj>=w)break;
        if(s[ni][nj]=='#')break;
        ans++;
        }
    } 
   cout << ans << endl;
   return 0;
}