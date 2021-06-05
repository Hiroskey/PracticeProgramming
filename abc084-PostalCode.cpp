#include<bits/stdc++.h>

using namespace std;


int main(){
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    if(s[a]=='-'){
        for(int i=0; i<a; i++){
            if(s[i]=='-'){
                cout << "No" << endl;
                return 0;
            }
        }
        for(int j=a+1; j<a+b+1; j++){
            if(s[j]=='-'){
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
        return 0;
    }else{
        cout << "No" << endl;
        return 0;  
    }
    
    
}
