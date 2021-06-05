#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j;
    string x;
    cin >> x;
 
    i=0;
    while(x[i]!='.'){
        if(x[i]=='\0')break;
        cout<<x[i];
        i++;
    }
    cout<< "\n";
    return 0; 
}   