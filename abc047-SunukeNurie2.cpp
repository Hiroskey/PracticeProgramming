#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int w, h, n;
    cin >> w >> h >> n;
    int left=0, right=w, high=h, low=0;

    int x, y, a;
    for(int i=0; i<n; i++){
        cin >> x;
        cin >> y;
        cin >> a;

        if(a==1)  left = max(x,left);
        if(a==2) right = min(x,right);
        if(a==3)   low = max(y,low);
        if(a==4)  high = min(y,high);
    }
    int ans;
    if(left < right && low < high) ans = (right-left)*(high-low);
    cout << ans << endl;
    return 0;    
}