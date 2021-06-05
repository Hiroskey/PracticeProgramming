#include<bits/stdc++.h>

using namespace std;

int main(){
    float xa, xb, xc, ya, yb, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    cout <<  fixed << setprecision(5) << abs((xa-xc)*(yb-yc) - (ya-yc)*(xb-xc))*0.5 << endl;
    return 0;    
}