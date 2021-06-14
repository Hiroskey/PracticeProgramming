#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
typedef long long ll;
 
//Kaisetsu
int main(){
	string s; ll k; cin>>s>>k;
	vector<ll> v;
	v.push_back(1);
	for(int i=1; i<s.size(); i++){
		if(s[i]==s[i-1]){
			v[v.size()-1]++;
		}else{
			v.push_back(1);
		}
	}
	if(s.front()!=s.back()){
		ll ans=0;
		for(auto x:v) ans+=x/2*k;
		cout<<ans<<endl;
	}else{
		ll ans=0;
		if(v.size()==1){
			cout<<s.size()*k/2<<endl;
			return 0;
		}
		for(int i=1; i<v.size()-1; i++){
			ans+=v[i]/2*k;
		}
		ans+=(v.front()+v.back())/2*(k-1);
		ans+=v.front()/2+v.back()/2;
		cout<<ans<<endl;
	}
}