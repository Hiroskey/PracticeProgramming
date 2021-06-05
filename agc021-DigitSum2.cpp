#include<bits/stdc++.h>

using namespace std;

int sum(string s){
  int ans=0;
  for(int i=0;i<s.size();i++)
    ans+=s[i]-'0';
  return ans;
}
 
int main(){
  string s; cin >> s;
  int top=s[0]-'1';
  int ans1=sum(s),ans2=top+(s.size()-1)*9;
  
  cout << max(ans1,ans2) << endl;
}