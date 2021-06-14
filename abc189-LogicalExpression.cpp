#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, cnt=1, ans=1;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		cnt*=2;
		if(s=="OR") 
		  ans+=cnt;
    }
	cout << ans << endl;
	return 0;
 } 