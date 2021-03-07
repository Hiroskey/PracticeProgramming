#include<iostream>
#include<math.h>
using namespace std;
 
void cf(double x, double r, int *low, int *high){
    *low = ceil(x-r);
    *high = floor(x+r);
}
 
 
int main(){
    long double x, y, r;
    long int start, end, bottom,top;
    long int ans=0;
 
    cin >> x;
    cin >> y;
    cin >> r;
 
    //cf(x, r, &start, &end);
    start = ceil(x-r);
    end = floor(x+r);
    r += 1e-14;
 
    for (int i=start; i<=end; ++i){
        long double p = sqrt(r*r  -  (x-i)*(x-i) );
        //cf(y, p, &bottom, &top);
        int bottom = ceil(y - p);
        int top = floor(y + p);
        ans += top - bottom + 1;
    }
    cout << ans;
    return 0;
}