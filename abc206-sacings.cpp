#include <bits/stdc++.h>
#include<math.h>

using namespace std;

int main () {
	long long n;
    cin >> n;
    for (int i=sqrt(2*n)-2; i<sqrt(2*n)+1; i++){
        if(n <= (i+1)*i/2){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}